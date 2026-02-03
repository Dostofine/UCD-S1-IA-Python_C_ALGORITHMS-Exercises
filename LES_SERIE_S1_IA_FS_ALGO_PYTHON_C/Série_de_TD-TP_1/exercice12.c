#include <stdio.h>
float  M,PH,FR,AN,GEO,moyenne,somme;
int C_M=5,C_PH=5,C_FR=4,C_AN=2,C_GEO=3;
int main(){
    printf("sasir la note de Math: ");
    scanf("%f",&M);
    printf("sasir la note de Physique: ");
    scanf("%f",&PH);
    printf("sasir la note de Français: ");
    scanf("%f",&FR);
    printf("sasir la note de Anglais: ");
    scanf("%f",&AN);
    printf("sasir la note de Géographie: ");
    scanf("%f",&GEO);
    somme=M*C_M + PH*C_PH + FR*C_FR +AN*C_AN + GEO*C_GEO;
    moyenne=somme/19;
    printf("le moyenne est: %f",moyenne);
    return 0;
}