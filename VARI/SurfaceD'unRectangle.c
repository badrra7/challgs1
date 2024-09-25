#include <stdio.h>

int main() {

    float longg,largg,surf;

    printf("Entrer la longueur et la largeur du la rectangle: ");
    scanf("%f%f",&longg,&largg);

    surf = longg*largg;
    printf("La surface est: %.2f",surf);

    return 0;
}