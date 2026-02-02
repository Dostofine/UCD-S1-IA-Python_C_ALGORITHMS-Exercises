#include <stdio.h>
#include <string.h>
int main(){
    char A[]="423",B[]="12",C[10];
    strcpy(C, A);
    strcat(C, B);
    printf("A=%s\n",A);
    printf("B=%s\n",B);
    printf("C=%s\n",C);
    return 0;
}