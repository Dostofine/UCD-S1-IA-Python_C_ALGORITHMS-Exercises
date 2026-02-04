#include <stdio.h>
float X,Y;
int main(){
    printf("saisir les coordonnées X et Y d’un point.\n");
    printf("saisir X: ");
    scanf("%f",&X);
    printf("saisir Y: ");
    scanf("%f",&Y);
    if (X>0 && Y>0)
        printf("le point se trouve dans la parie A du plan.\n");
    else if (X>0 && Y<0)  
        printf("le point se trouve dans la parie D du plan.\n");
    else if (X<0 && Y>0)  
        printf("le point se trouve dans la parie B du plan.\n");
    else if (X<0 && Y<0)  
        printf("le point se trouve dans la parie C du plan..\n");
    else
        printf("le point est le centre du plan..\n");
    return 0;
}