#include <stdio.h>

int main() {

    float ent;
    printf("Entrer un nombre entier naturel:");
    scanf("%f",&ent);
    printf("Le nombre est en forme binaire est : %2.f \n",ent);
    printf("Le nombre est en forme hexadécimale est : %6.f \n",ent);
}