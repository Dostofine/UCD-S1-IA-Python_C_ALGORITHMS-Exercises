#include <stdio.h>
#include <math.h>
float sn,x;
int n;
int main(){
    while(1){
        printf("saisir un entier n>0: ");
        scanf("%d",&n);
        if(n>0)
            break;
    }
    sn=0;
    printf("saisir un reel x: ");
    scanf("%f",&x);
    for(int i=1;i<=n;i++){
        sn+=i*pow(x, i);
    }
    printf("sn=%f",sn);
    return 0;
}