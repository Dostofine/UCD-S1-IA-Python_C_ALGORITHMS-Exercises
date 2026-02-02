#include <stdio.h>
int A,B,C,temp;
int main(){
    printf("saisir 3 entiers A , B ,C: \n");
    scanf("%d %d %d",&A,&B,&C);
    temp=A;
    A=C;
    C=B;
    B=temp;
    printf("appres la permetation A=%d , B=%d , C=%d \n",A,B,C);
    return 0;
}