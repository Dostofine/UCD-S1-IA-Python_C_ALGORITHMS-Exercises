#include <stdio.h>
float N1,N2;
int main(){
    printf("saisir deux nombre N1 et N2: \n");
    scanf("%f %f",&N1,&N2);
    if (N1<N2)
        printf("les deux nombres sont ordonnées par ordre croissant.\n");
    else if (N1>N2)
        printf("les deux nombres sont ordonnées par ordre décroissant.\n");
    else
        printf("les deux nombres sont identiques.\n");
    return 0;   
}