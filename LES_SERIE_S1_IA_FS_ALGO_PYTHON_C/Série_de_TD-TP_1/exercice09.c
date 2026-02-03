#include <stdio.h>
int N1,N2;
int main(){
    printf("saisir deux entier N1 et N2: \n");
    scanf("%d %d",&N1,&N2);
    printf("%d + %d = %d\n",N1,N2,N1+N2);
    printf("%d - %d = %d\n",N1,N2,N1-N2);
    printf("%d * %d = %d\n",N1,N2,N1*N2);
    if(N2!=0){
        printf("%d / %d = %.2f\n",N1,N2,(float)N1/N2);
        printf("%d modulo %d = %d\n",N1,N2,N1%N2);
    }
    else{
        printf("la division sur 0 est invalide !\n");
    }
    return 0;
}