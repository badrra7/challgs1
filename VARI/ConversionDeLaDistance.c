#include <stdio.h>

int main() {
    
    float Km,Yards;
    const float nu = 1093.61;
    printf("Entrer la distance en kilomètres:\n");
    scanf("%f",&Km);
    Yards = Km*nu;
    printf("la la distance en yard: %f",Yards);



    return 0;
}