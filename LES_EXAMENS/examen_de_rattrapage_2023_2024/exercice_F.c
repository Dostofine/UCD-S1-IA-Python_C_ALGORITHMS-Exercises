#include <stdio.h>
float max,min,devis;
int n;
float T[99];
int main(){
    //saisir et affich le tableau T
    do{
        printf("saisir un entier n<100: ");
        scanf("%d",&n);
    }while(n<0 || n>=100);
    for(int i=0;i<n;i++){
        printf("saisir la valeur %d du tableau: ",i+1);
        scanf("%f",&T[i]);
    }
    printf("{");
    for(int i=0;i<n;i++){
        printf(" %f ",T[i]);
    }
    printf("}\n");
    //chaircher et afficher min et max
    min=T[0];
    max=T[0];
    for(int i=0;i<n;i++){
        if(T[i]>max){
            max=T[i];
        }
        if(T[i]<min){
            min=T[i];
        }
    }
    printf("min=%f\n",min);
    printf("max=%f\n",max);
    //Normalise et afficher toute les valeurs du tableau 0-1
    devis=max-min;
    for(int i=0;i<n;i++){
        T[i]=T[i]/devis;
    }
    printf("{");
    for(int i=0;i<n;i++){
        printf(" %f ",T[i]);
    }
    printf("}\n");
    return 0;
}