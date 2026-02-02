#include <stdio.h>
int X,Y;
int main(){
    printf("saisir deux entier X et Y :\n");
    scanf("%d %d",&X,&Y);
    X=X+Y;
    Y=X-Y;
    X=X-Y;
    printf("appres les calcules X=%d , Y=%d\n",X,Y);
    return 0;
}