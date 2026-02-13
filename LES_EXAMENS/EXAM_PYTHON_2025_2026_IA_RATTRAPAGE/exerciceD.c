#include <stdio.h>
int a,n,U0,Ui_1,Ui;
int main(){
    do{
        printf("saisir un entier n>=0: ");
        scanf("%d",&n);
    }while(n<0);
     do{
        printf("saisir un entier a!=0: ");
        scanf("%d",&a);
    }while(n==0);   
    U0=a;
    Ui_1=U0;
    printf("{ %d ",U0);
    for(int j=0;j<n;j++){
        Ui=7*(Ui_1+a);
        printf(" %d ",Ui);
        Ui_1=Ui;
    }
    printf("}\n");
    return 0;
}