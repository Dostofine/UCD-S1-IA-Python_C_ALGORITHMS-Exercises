#include <stdio.h>
int n,MIN,S,H;
int main(){
    printf("saisir le nombre de secondes: ");
    scanf("%d",&n);
    H=n/3600;
    MIN=n%3600/60;
    S=n%60;
    printf("le nombre de secdondes %d :\n",n);
    printf("%d h , %d min , %d s\n",H,MIN,S);
    return 0;
}