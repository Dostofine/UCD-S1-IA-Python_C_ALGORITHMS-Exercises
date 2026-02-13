#include <stdio.h>
#include <math.h>
int nombre;
int main(){
    for(int i=1;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int l=0;l<=9;l++){
                nombre=i*100+j*10+l;
                if((pow(i, 3)+pow(j, 3)+pow(l, 3))==nombre)
                {
                    printf("%d\n",nombre);
                }
            }
        }
    }
    return 0;
}