
#include <stdio.h>
int N,i;
int algo1(){
    printf("saisir un enteir N: ");
    scanf("%d",&N);
    i=0;
    do{
        N++;
        printf("%d\n",N);
        i++;
    }while(i<10);
    return 0;
}
int algo2(){
    printf("saisir un enteir N: ");
    scanf("%d",&N);
    for(int i=0;i<10;i++){
        N++;
        printf("%d\n",N);
    }
    return 0;
}
int main(){
    algo1();
    algo2();
    return 0;
}
