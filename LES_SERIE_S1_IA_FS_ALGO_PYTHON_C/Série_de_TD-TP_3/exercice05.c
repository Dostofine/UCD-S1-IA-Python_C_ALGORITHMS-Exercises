#include <stdio.h>
int N;
int main(){
    do{
        printf("saisir un entier N entre 10 et 20: ");
        scanf("%d",&N);
        if(N>20)
            printf("Plus grand !\n");
        else if(N<10)
            printf("Plus petit ! \n");
    }while(N>20 || N<10);
    return 0;
}