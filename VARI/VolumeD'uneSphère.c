#include <stdio.h>
#include <math.h>

int main() {
    
    float r,vol;
    printf("le rayon de la sphère:");
    scanf("%f",&r);

    vol = (4/3)*3.14*pow(r,2);
    printf("La Volume est: %.3f",vol);

    return 0;
}