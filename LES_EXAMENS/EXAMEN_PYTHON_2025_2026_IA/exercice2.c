#include <stdio.h>
int X,Y,Z,temp;
int main(){
    printf("saisir 3 variables X, Y, Z: \n");
    scanf("%d %d %d",&X,&Y,&Z);
    printf("avant la permetation X=%d , Y=%d , Z=%d .",X,Y,Z);
    temp=X;
    X=Z;
    Z=Y;
    Y=temp;
    printf("apres la permetation X=%d , Y=%d , Z=%d .",X,Y,Z);
    return 0;
}