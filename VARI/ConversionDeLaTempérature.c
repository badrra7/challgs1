// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    
    float cel,kelv;
    printf("Entrer la temperateur en Celsius :\n");
    scanf("%f",cel);
    
    kelv = cel + 273.15;
    printf("la température en Kelvin est: %f",kelv);



    return 0;
}