#include <stdio.h>
int n_centaines,n_dizaines,n_unités,n;
int main(){
    do{
        printf("saisir un entier positif inférieur à 999: ");
        scanf("%d",&n);
    }while(n>=999);
    n_centaines=n/100;
    n_dizaines=n%100/10;
    n_unités=n%100%10;
    printf("le nombre des centaines est: %d\n",n_centaines);
    printf("le nombre des dizaines est: %d\n",n_dizaines);
    printf("le nombre des unités est: %d\n",n_unités);
    return 0;
}