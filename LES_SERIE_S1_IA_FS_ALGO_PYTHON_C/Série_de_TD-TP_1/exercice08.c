#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int A;
float C,B;
char D[100];
bool E;
int main(){
    A=30;
    B=A*2;
    printf("B=%f\n",B);
    C=(B+A)/4;
    B=C/5;
    strcpy(D, "Amine");
    E=(A > 40) || (C < B);
    printf("les valeurs obtenues sont : A = %d B = %f C = %f D = %s E =%d\n",A,B,C,D,E);
    return 0;
}

