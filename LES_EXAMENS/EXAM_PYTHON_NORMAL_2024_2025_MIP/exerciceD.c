#include <stdio.h>
int n,U0,U1,Ui,Ui_1,Ui_2;
int main(){
    do{
        printf("saisir un entier n>=0: ");
        scanf("%d",&n);
    }while(n<0);
    U0=5;
    U1=7;
    Ui_1=U1;
    Ui_2=U0;
    printf("{");
    if(n==0){
        printf(" %d ",U0);
    }
    else if(n==1){
        printf(" %d %d ",U0,U1);
    }
    else{
        printf(" %d  %d ",U0,U1);
        for(int i=2;i<=n;i++){
            Ui=Ui_1+Ui_2;
            printf(" %d ",Ui);
            Ui_2=Ui_1;
            Ui_1=Ui;
        }
    }
    printf("}\n");
    return 0;
}