#include <stdio.h>
int A,B,C;
int algorithme1(){
    A=5;
    B=A+4;
    A=A+1;
    B=A-4;
    printf("==================\n");
    printf("algorithme1\n");
    printf("A=%d , B=%d\n",A,B);
    return 0;
}
int algorithme2(){
    A=3;
    B=10;
    C=A+B;
    B=A+B;
    A=C;
    printf("==================\n");
    printf("algorithme2\n");
    printf("A=%d , B=%d , C=%d\n",A,B,C);
    return 0;
}
int algorithme3(){
    A=5;
    B=2;
    A=B;
    B=A;
    printf("==================\n");
    printf("algorithme3\n");
    printf("A=%d , B=%d\n",A,B);
    printf("==================");
    return 0;
}
int main(){
    algorithme1();
    algorithme2();
    algorithme3();
    return 0;
}