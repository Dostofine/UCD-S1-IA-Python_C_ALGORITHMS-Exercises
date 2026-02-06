#include <stdio.h>
int H,MIN;
int main(){
    printf("saisir le nombre des heures : ");
    scanf("%d",&H);
    printf("saisir le nombres des minutes: ");
    scanf("%d",&MIN);
    if(MIN<59){
        MIN++;
    }
    else if(MIN==59){
        if(H<23){
            MIN=0;
            H++;
        }
        else if(H=23){
            MIN=0;
            H=0;
        }
    }
    printf("Dans une minute, il sera %d heure(s) %d",H,MIN);
    return 0;
}