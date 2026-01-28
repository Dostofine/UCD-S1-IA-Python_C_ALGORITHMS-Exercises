#include <stdio.h>
int n;
float Un,Un_2,Un_1;
int main(){
    do{
        printf("sasir un entier n≥3: ");
        scanf("%d",&n);
    }while(n<3);
    printf("U(1)=%.2f\n",4.0);
    printf("U(2)=%.2f\n",2.0);
    Un_2=4;
    Un_1=2;
    for(int i=3;i<=n;i++){
        Un=(8*Un_1)-(4*Un_2);
        printf("U(%d)= %.2f\n",i,Un);
        Un_2=Un_1;
        Un_1=Un;
    }
    return 0;
}