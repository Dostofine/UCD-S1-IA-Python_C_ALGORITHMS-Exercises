#include <stdio.h>
#include <stdbool.h>
float T[40];
float temp;
bool verifier;
int main(){
    for(int i=0;i<40;i++){
        printf("saisir la note numero %d ",i+1);
        scanf("%f",&T[i]);
    }
    do{
        for(int i=0;i<39;i++){
            if(T[i]<T[i+1]){
                verifier=false;
            }
        }
        if(verifier=false){
            for(int i=0;i<39;i++){
                temp=T[i];
                T[i]=T[i+1];
                T[i+1]=temp;
                verifier=true;
            }
        }
    }while(verifier=false);
    for(int i=0;i<40;i++){
        if(T[i]>=16){
            printf("la note numero %d est %f \n",i+1,T[i]);
            printf("la mention Tres bien\n");
        }
        else if(T[i]>=14){
            printf("la note numero %d est %f \n",i+1,T[i]);
            printf("la mention bien\n");
        }
        else if(T[i]>=12){
            printf("la note numero %d est %f \n",i+1,T[i]);
            printf("la mention Assez bien\n");
        }
        else if(T[i]>=10){
            printf("la note numero %d est %f \n",i+1,T[i]);
            printf("la mention passable\n");
        }
        else{
            printf("la note numero %d est %f \n",i+1,T[i]);
            printf("la mention Ajourne\n");
        }
    }
    return 0;
}