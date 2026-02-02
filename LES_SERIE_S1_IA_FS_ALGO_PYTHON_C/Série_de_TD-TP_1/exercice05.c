#include <stdio.h>
int A,B,temp;
int main(){
    printf("saisir deux entier A et B :\n");
    scanf("%d %d",&A,&B);
    temp=A; 
    A=B;
    B=temp;
    printf("appres la permetation: A=%d , B=%d\n",A,B);
    return 0;
}