#include <stdio.h>
float m;
int main(){
    printf("saisir le montant: ");
    scanf("%f",&m);
    if(m<=5000 && m>=2000)
        m=m-m*0.01;
    else if(m>5000)
        m=m-m*0.02;
    printf("le montant net est : %f",m);
    return 0;
}