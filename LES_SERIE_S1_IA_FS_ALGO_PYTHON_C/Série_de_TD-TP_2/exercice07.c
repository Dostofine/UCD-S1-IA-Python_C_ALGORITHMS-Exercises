#include <stdio.h>
float N1,N2,N3;
int main(){
    printf("saisir deux nombre N1 et N2: \n");
    scanf("%f %f %f",&N1,&N2,&N3);
    if (N1<N2 && N2<N3)
        printf("les deux nombres sont ordonnées par ordre croissant.\n");
    else if (N1>N2 && N2>N3)
        printf("les deux nombres sont ordonnées par ordre décroissant.\n");
    else
        printf("les deux nombres non ordonnés.\n");
    return 0;   
}