#include <stdio.h>
#include <string.h>
int main() {
    float X, Y;
    int a, b;
    char chaine1[100], chaine2[100];
    printf("saisir un reel X : ");
    scanf("%f", &X);
    printf("saisir un reel Y : ");
    scanf("%f", &Y);
    printf("saisir un entier a : ");
    scanf("%d", &a);
    printf("saisir un entier b : ");
    scanf("%d", &b);
    printf("saisir chaine1 : ");
    scanf("%s", chaine1);
    printf("saisir chaine2 : ");
    scanf("%s", chaine2);
    printf("le type de 1 est : float\n");
    printf("le type de 2 est : error\n");
    printf("le type de 3 est : string \n");
    printf("le type de 4 est : int\n");
    return 0;
}
