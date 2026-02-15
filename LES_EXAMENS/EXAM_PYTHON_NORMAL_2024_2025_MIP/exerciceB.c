#include <stdio.h>
int X,Y,Z;
int main(){
    printf("saisir deux entiers X et Y: \n");
    scanf("%d %d",&X,&Y);
    Z=X;
    X=Y;
    Y=Z;
    printf("les valeurs apres la permetation.");
    printf("X=%d et Y=%d",X,Y);
    return 0;
}