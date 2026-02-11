#include <stdio.h>
float M,S=0,prix;
int i=0;
int main(){
    do{
        i++;
        printf("saisir le prix numero {%d}: ",i);
        scanf("%f",&prix);
        if(prix!=0)
            S=S+prix;
        else
            printf("Merci d'utiliser ce logiciel.\n");
    }while(prix!=0);
    M=S/(i-1);
    printf("la somme est %f .\n",S);
    printf("le moyenne est %f .\n",M);
    return 0;
}