#include <stdio.h>

int main() {
    int type, duree;
    float tarif, prix;
    float montantVerse = 0.0;
    float piece;
    float monnaie;

    printf("===== HORODATEUR =====\n");

    // Choix du véhicule
    printf("Choisir le véhicule :\n");
    printf("1 - Voiture\n");
    printf("2 - Moto\n");
    scanf("%d", &type);

    if (type == 1)
        tarif = 1.50;
    else if (type == 2)
        tarif = 0.50;
    else {
        printf("Choix invalide.\n");
        return 0;
    }

    // Saisie de la durée
    do {
        printf("Durée de stationnement (1 à 12 heures) : ");
        scanf("%d", &duree);
    } while (duree < 1 || duree > 12);

    // Calcul du prix
    prix = tarif * duree;

    printf("\nMontant à payer : %.2f €\n", prix);

    // Paiement
    while (montantVerse < prix) {
        printf("Introduire une pièce (€) : ");
        scanf("%f", &piece);

        if (piece == 0.10 || piece == 0.20 || piece == 0.50 ||
            piece == 1.00 || piece == 2.00) {

            montantVerse += piece;
            printf("Montant versé : %.2f €\n", montantVerse);
        }
        else {
            printf("Pièce non acceptée !\n");
        }
    }

    // Rendu monnaie
    monnaie = montantVerse - prix;

    printf("\n===== TICKET =====\n");

    if (type == 1)
        printf("Véhicule : Voiture\n");
    else
        printf("Véhicule : Moto\n");

    printf("Durée : %d heure(s)\n", duree);
    printf("Prix : %.2f €\n", prix);
    printf("Montant versé : %.2f €\n", montantVerse);
    printf("Monnaie rendue : %.2f €\n", monnaie);

    printf("\nMerci, bon stationnement !\n");

    return 0;
}
