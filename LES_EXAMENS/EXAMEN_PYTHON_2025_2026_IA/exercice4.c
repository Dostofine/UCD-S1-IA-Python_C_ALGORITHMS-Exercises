#include <stdio.h>
#include <stdbool.h>
float T[40];
float temp;
bool verifier;
int main(){
    for(int i=0;i<40;i++){
        do{
            printf("saisir la note numero %d ",i+1);
            scanf("%f",&T[i]);
            if(T[i]<0 || T[i]>20){
                printf("la note %f pas entre 0 et 20!.",T[i]);

            }
        }while(T[i]<0 || T[i]>20);
    }
    do{
        verifier=true;
        for(int i=0;i<39;i++){
            if(T[i]<T[i+1]){
                temp=T[i];
                T[i]=T[i+1];
                T[i+1]=temp;
                verifier=false;
            }
        }
    }while(verifier==false);
    for(int i=0;i<40;i++){
        printf("la note numero %d est %f \n",i+1,T[i]);
        if(T[i]>=16){
            printf("la mention Tres bien\n");
        }
        else if(T[i]>=14){
            printf("la mention bien\n");
        }
        else if(T[i]>=12){
            printf("la mention Assez bien\n");
        }
        else if(T[i]>=10){
            printf("la mention passable\n");
        }
        else{
            printf("la mention Ajourne\n");
        }
    }
    return 0;
}