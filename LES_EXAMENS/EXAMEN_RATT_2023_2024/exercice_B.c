#include <stdio.h>
float N1,N2;
char operation;
int main(){
    printf("saisir les deux nombre N1 et N2 : ");
    scanf("%f %f",&N1,&N2);
    do{
        printf("saisir une des les operation suivant {+,-,*,/}: ");
        scanf(" %c",&operation);
    }while(operation!='+' && operation!='-' && operation!='*' && operation!='/');
    if(operation='+'){
        printf("%.3f + %.3f = %.3f",N1,N2,N1+N2);
    }
    else if(operation='-'){
        printf("%.3f - %.3f = %.3f",N1,N2,N1-N2);
    }
    else if(operation='*'){
        printf("%.3f x %.3f = %.3f",N1,N2,N1*N2);
    }
    else if(operation='/'){
        if(N2!=0)
            printf("%.3f / %.3f = %.3f",N1,N2,N1/N2);
        else
            printf("math error!");
    }
}