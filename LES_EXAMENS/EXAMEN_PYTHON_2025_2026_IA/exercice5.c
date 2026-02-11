#include <stdio.h>
#include <stdlib.h>
float M[3][3];
float N[3][3];
float G[3][3];
int main(){
    //saisir les matrice M et N
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("saisir la valeur de matrice M case {%d} {%d}: ",i+1,j+1);
            scanf("%f",&M[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("saisir la valeur de matrice N case {%d} {%d}: ",i+1,j+1);
            scanf("%f",&N[i][j]);
        }
    }
    //calcule la matrice G
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            G[i][j]=M[i][j]+N[i][j];
        }
    }
    //affiche les matrices sur l'ecran
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %f ",M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %f ",N[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %f ",G[i][j]);
        }
        printf("\n");
    }
    return 0;
}