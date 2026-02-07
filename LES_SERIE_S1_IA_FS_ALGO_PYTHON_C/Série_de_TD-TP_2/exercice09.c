#include <stdio.h>
int n;
float facture;
int main(){
    printf("saisir le nombre des photocopies : ");
    scanf("%d",&n);
    if(n<=10)
        facture=n*0.1;
    else if(n>10 && n<-30)
        facture=10*0.1+(n-10)*0.09;
    else
        facture=10*0.1+20*0.09+(n-10)*0.08;
    printf("la facture est : %.3f\n",facture);
    return 0;
}