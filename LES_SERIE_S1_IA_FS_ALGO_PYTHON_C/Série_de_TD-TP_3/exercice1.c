#include <stdio.h>
#include <stdbool.h>
int nb,k;
int tantque(){
    scanf("%d",&nb);
    k=1;
    while(k!=nb){
        printf("%d\n",k);
        k++;
    }
    return 0;
}
int repeter(){
    scanf("%d",&nb);
    k=1;
    while(true){
        printf("%d\n",k);
        k++;
        if(k>nb){
            break;
        }
    }
    return 0;
}
int main(){
    repeter();
    return 0;
}
