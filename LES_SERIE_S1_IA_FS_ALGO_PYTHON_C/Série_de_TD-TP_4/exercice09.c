#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int N_total_elements_S_positif,max_pos[2],min_pos[2];
float somme,somP,somN,max,min,M[20][15];
int main(){
    N_total_elements_S_positif=0;
    somme=0;
    somP=0;
    somN=0;
    for(int i=0;i<20;i++){
        for(int j=0;j<15;j++){
            printf("saisir l'element de cas {%d , %d} : ",i+1,j+1);
            scanf("%f",&M[i][j]);
            somme+=M[i][j];
            if(M[i][j]>0){
                N_total_elements_S_positif++;
                somP+=M[i][j];
            }
            else{
                somN+=M[i][j];
            }
        }
    }
    max=M[0][0];
    min=M[0][0];
        somN=0;
    for(int i=0;i<20;i++){
        for(int j=0;j<15;j++){
            if(M[i][j]>max){
                max=M[i][j];
                max_pos[0]=i;
                max_pos[1]=j;
            }
            if(M[i][j]<min){
                min=M[i][j];
                min_pos[0]=i;
                min_pos[1]=j;
            }
        }
    }
    printf("la somme de tous les éléments de la matrice est: %f\n",somme);
    printf("le nombre des éléments strictement positifs est: %d\n",N_total_elements_S_positif);
    printf("la somme des éléments positifs (SomP) est: %f\n",somP);
    printf("la somme des éléments négatifs(SomN): %f\n",somN);
    printf("le plus grand élément de la matrice %f ainsi que sa position est {%d,%d}\n",max,max_pos[0],max_pos[1]);
    printf("le plus petit élément de la matrice %f ainsi que sa position est {%d,%d}\n",min,min_pos[0],min_pos[1]);
    return 0;
}