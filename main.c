#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//ex5
int resultatEstCorrect(int resultatPropose, int numeroQuestion) {
    int gagne; // gagne est un booleen: vaut 1 si le resultat propose est correct, 0 sinon.
    switch (numeroQuestion) {
        case 1:
            // Plus petit entier pair strictement positif
            gagne = (resultatPropose == 2);
            break;
        case 2:
            // Plus grand entier strictement negatif
            gagne = (resultatPropose == -1);
            break;
        case 3:
            // Prix d'une galette lorsque trois galettes valent 45 euros
            gagne = (resultatPropose == 15);
            break;
        case 4:
            //Valeur maximale d'une note dans le systeme standard francais
            gagne = (resultatPropose == 20);
            break;
        case 5:
            // nombre de joueurs sur le terrain dans une equipe de foot
            gagne = (resultatPropose == 11);
            break;
        default:
            printf("Numero de question incorrect.\n");
            gagne = 0;
    }
    printf("input : %d | #question : %d | gagne ? : %d\n", resultatPropose, numeroQuestion, gagne);

    return gagne; // renvoie le booleen gagne
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    printf("Hello, World!\n");

    //ex2
    int n;
    n = 0;
    printf("Donnez un entier:");
    scanf("%d", &n);

    if (n < 100) {
        printf("n est strictement inferieur a 100\n");
    } else {
        printf("n est superieur ou egal a 100\n");
    }

    printf("n est egal a %d.\n", n);
    fflush(stdin);

    //ex3
    float x, y, z;
    z = 0;
    y = 0;
    x = 0;

    printf("Donnez trois nombres a virgules:\n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    float avg;
    int avg_timesHund;
    float avg_twoDec;
    avg = (x + y + z) / 3;
    avg_timesHund = ((x + y + z) * 100) / 3;
    avg_twoDec = avg_timesHund / 100.0;

    printf("La moyenne est %f.\n", avg);
    printf("La moyenne est : %f\n", avg_twoDec);
    printf("La moyenne avec deux chiffres apres la virgule est %0.2f\n", avg);
    fflush(stdin);

    //ex4

    char c;

    printf("Donnez un charactere (seul le premier charactere donne sera pris en compte) :");
    scanf(" %c", &c);

    if ((c < 65) || ((c > 90) && (c < 97)) || (c > 122))
    {
        printf("ce n'est pas une lettre\n");
        return 0;
    }
    else
    {
        printf("code ASCII : %d\n", c);
        printf("charactere suivant : %c\n", c + 1);
        if (c <= 90)
        {
            printf("charactere en minuscule : %c\n", c + 32);
        }
        else if (c >= 97)
        {
            printf("charactere en majuscule : %c\n", c - 32);
        }
    }
    fflush(stdin);
    //ex5

    srand(time(NULL));

    int secret;
    secret = (rand() % 5) + 1;

    //printf("La variable est : %d\n", secret);

    switch (secret) {
        case 1:
            printf("Quel est le plus petit entier pair strictement positif ?\n");
            break;
        case 2:
            printf("Quel est le plus grand entier strictement negatif ?\n");
            break;
        case 3:
            printf("Bob a achete 3 galettes des rois pour 45 euros. Combien coute une galette ?\n");
            break;
        case 4:
            printf("Alice a obtenu tout juste a son examen d'informatique, qui est note selon le systeme standard francais. Quelle note a-t-elle obtenue ?\n");
            break;
        case 5:
            printf("Combien y'a-t-il de joueurs de foot sur le terrain dans une meme equipe ?\n");
            break;
        default:
            printf("Numero de question non valide\n");
    }

    int input = 0;
    scanf("%d", &input);

    if (resultatEstCorrect(input, secret)) {
        printf("Gagne\n");
    } else {
        printf("Perdu\n");
    }
    fflush(stdin);

    return 0;
}


