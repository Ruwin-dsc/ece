#include <stdio.h>

float kmhms(float vkmh) {
    return vkmh / 3.6;
}

int main() {
    int choix;

    printf("PROGRAMME QUI CALCULE L'ACCELERATION EN FONCTION DE LA SITUATION\n");

    do {
        printf("\n");
        printf("1 - Acceleration moyenne\n");
        printf("2 - Choc\n");
        printf("3 - Arret brutal\n");
        printf("4 - Rond point\n");
        printf("0 - RIEN FAIRE\n");

        scanf("%d", &choix);

        if (choix == 1) {
            float vi;
            float vf;
            float dt;

            printf("Vous avez selectionne l'acceleration moyenne\n");
            printf("Veuillez indiquer la vitesse initiale du vehicule en km/h\n");
            scanf("%f", &vi);

            printf("Veuillez indiquer la vitesse finale du vehicule en km/h\n");
            scanf("%f", &vf);

            printf("Veuillez indiquer le temps en secondes\n");
            scanf("%f", &dt);

            vi = kmhms(vi);
            vf = kmhms(vf);

            float a = (vf - vi) / dt;

            printf("Voici l'acceleration moyenne de votre vehicule : %.2f m/s^-2\n", a);
        } else if (choix == 2) {
				float dv;
				float dt;

				printf("Vous avez selectionne le choc\n");
				printf("Veuillez indiquer la vitesse du vehicule en km/h\n");
				scanf("%f", &dv);

				printf("Veuillez indiquer le temps en secondes\n");
				scanf("%f", &dt);

				dv = kmhms(dv);

				float a = dv / dt;

				printf("Voici l'acceleration pendant le choc de votre vehicule : %.2f m/s^-2\n", a);
		} else if (choix == 3) {
			float vi;
            float vf;
            float dt;

            printf("Vous avez selectionne l'arrêt brutal\n");
            printf("Veuillez indiquer la vitesse initiale du vehicule en km/h\n");
            scanf("%f", &vi);

            printf("Veuillez indiquer la vitesse finale du vehicule en km/h\n");
            scanf("%f", &vf);

            printf("Veuillez indiquer le temps en secondes\n");
            scanf("%f", &dt);

            vi = kmhms(vi);
            vf = kmhms(vf);

            float a = (vf - vi) / dt;

            printf("Voici l'acceleration de votre vehicule lors d'un arret brutal : %.2f m/s^-2\n", a);
		}	else if (choix == 4) {
				float dv;
				float R;

				printf("Vous avez selectionne le rond point\n");
				printf("Veuillez indiquer la vitesse du vehicule en km/h\n");
				scanf("%f", &dv);

				printf("Veuillez indiquer le rayon du rond point en m\n");
				scanf("%f", &R);

				dv = kmhms(dv);

				float a = (dv * dv) / R;

				printf("Voici l'acceleration pendant que votre vehicule tourne dans un rond point : %.2f m/s^-2\n", a);
		}
			

    } while (choix != 0);

    return 0;
}
