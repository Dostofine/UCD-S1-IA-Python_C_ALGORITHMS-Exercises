#include <stdio.h>
int i,j,somme;
int T[10][10];
int main(){
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            printf("saisir la case %d %d: ",i+1,j+1);
            scanf("%d",&T[i][j]);
        }
    }
    //calcule et affich la somme des lignes
    printf("la somme des lignes.\n");
    somme=0;
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            somme=somme+T[i][j];
        }
        printf("%d\n",somme);
        somme=0;
    }
    //calcule et affich la somme des colonnes
    printf("la somme des colonnes.\n");
    somme=0;
    for(int j=0;j<=9;j++){
        for(int i=0;i<=9;i++){
            somme=somme+T[i][j];
        }
        printf("%d\n",somme);
        somme=0;

    }
    return 0;
}