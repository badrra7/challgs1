#include <stdio.h>
#include <math.h>

   int main() {
   
    float x1,y1,z1,x2,y2,z2,dis;
    printf("Veuillez entre X et Y et Z de la premier point: ");
    scanf("%f%f%f",&x1,&y1,&z1);

    printf("Veuillez entre X et Y et Z de la deuxieme point: ");
    scanf("%f%f%f",&x2,&y2,&z2);

    dis = sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
    printf("La distance est:%f",dis)
    

    return 0;
}