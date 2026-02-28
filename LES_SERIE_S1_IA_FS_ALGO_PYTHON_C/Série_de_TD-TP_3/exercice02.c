#include <stdio.h>
int A, B, C;
int main(){
    A=0;
    printf("saisir B: ");
    scanf("%d",&B);
    printf("saisir C: ");
    scanf("%d",&C);
    while(C>0){
        if(B==C){
            A++;
        }
        printf("saisir C: ");
        scanf("%d",&C);
    }
    printf("A=%d\n",A);
    return 0;
}