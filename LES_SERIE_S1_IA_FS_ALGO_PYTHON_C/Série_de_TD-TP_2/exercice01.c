#include <stdio.h>
int n,N;
int main(){
    printf("saisir un entier n: ");
    scanf("%d",&n);
    N=n%2;
    if(N==0)
    {
        printf("le nombre %d est un nombre pair.\n",n);
    }
    else
    {
        printf("le nombre %d est un nombre impair.\n",n);
    }
    return 0;
}