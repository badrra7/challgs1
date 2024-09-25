#include <stdio.h>

int main() {
    
    float kmh,ms;
    const float nu = 0.27778;
    printf("Entrer la vitesse en kilomètres par heure (km/h): \n");
    scanf("%f",&kmh);
    ms = kmh*nu;
    printf("La vitessz en mètres par seconde (m/s) est: %f",ms);



    return 0;
}