#include <stdio.h>
float N1,N2,solution;
char op;
int main(){
    printf("saisir deux nombres N1 et N2 : \n");
    scanf("%f %f",&N1,&N2);
    printf("saisir une opération ( +, - , / , * ): ");
    scanf(" %c",&op);
    if(op == '+'){
        solution=N1+N2;
        printf("%f + %f = %f",N1,N2,solution);
    }
    else if(op == '-'){
        solution=N1-N2;
        printf("%f - %f = %f",N1,N2,solution);
    }
    else if(op == '*'){
        solution=N1*N2;
        printf("%f * %f = %f",N1,N2,solution);
    }
    else if(op == '/'){
        if (N2!=0){
            solution=N1/N2;
            printf("%f / %f = %f",N1,N2,solution);
        }
        else
            printf("math error!\n");
    }
    else
        printf("invalide choix.\n");
    return 0;
}