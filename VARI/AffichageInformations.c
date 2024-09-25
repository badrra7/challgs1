#include <stdio.h>
int main()
{ 
    char nom[60];
    char prenom[60];
    char sexe[10];
    char email[50];
    int age;

    printf("Entrer votre name: \n");
    scanf("%s",&nom);
    printf("Entrer votre prenom: \n");
    scanf("%s",&prenom);
    printf("Entrer votre sexe: \n");
    scanf("%s",&sexe);
    printf("Entrer votre email: \n");
    scanf("%s",&email);
    printf("Entrer votre age: \n");
    scanf("%d",&age);
    
    printf("VOTRE INFO");
    printf("YOUR nom IS: %s \n",nom);
    printf("YOUR PRENOM IS: %s \n",prenom);
    printf("YOUR SEXE IS: %s \n",sexe);
    printf("YOUR EMAIL IS: %s \n",email);
    printf("YOUR AGE IS: %d \n",age);


    return 0;
}