#include <stdio.h>
int a=2025;
long double  U[3L];
int main(){
    U[0]=50;
    for(int i=1;i<4;i++){
        U[i]=0.5*(U[i-1]+(a/U[i-1]));
    }
    printf("{");
    for(int i=0;i<4;i++){
       printf(" U(%d) = %.12Lf ",i,U[i]);
    }
    printf("}\n");
    return 0;
}