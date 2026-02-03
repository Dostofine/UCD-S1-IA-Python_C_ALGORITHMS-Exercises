#include <stdio.h>
#include <math.h>
float X1,X2,Y1,Y2,D;
int main(){
    printf("saisir les coordonnées de A: \n");
    printf("saisir X1: ");
    scanf("%f",&X1);
    printf("saisir Y1: ");
    scanf("%f",&Y1);
    printf("saisir les coordonnées de B: \n");
    printf("saisir X2: ");
    scanf("%f",&X2);
    printf("saisir Y2: ");
    scanf("%f",&Y2);
    D=sqrt(pow((X2-X1), 2) + pow((Y2-Y1), 2));
    printf("la distance AB=%.3f\n",D);
    return 0;
}