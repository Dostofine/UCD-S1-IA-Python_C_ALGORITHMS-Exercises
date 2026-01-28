#include <stdio.h>
#include <math.h>
int a=2025;
long double  U[2L];
int main(){
    U[0]=40;
    for(int i=1;i<3;i++){
        U[i]=(pow(U[i-1], 3)+3*a*U[i-1])/(3*pow(U[i-1], 2)+a);
    }
    printf("{");
    for(int i=0;i<3;i++){
       printf(" U(%d) = %.12Lf ",i,U[i]);
    }
    printf("}\n");
    return 0;
}