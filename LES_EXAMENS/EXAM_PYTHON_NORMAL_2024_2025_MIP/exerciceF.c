#include <stdio.h>
int M[3][3];
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("saisir la case {%d}{%d}: ",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",M[j][i]);
        }
        printf("\n");
    }
    return 0;
}