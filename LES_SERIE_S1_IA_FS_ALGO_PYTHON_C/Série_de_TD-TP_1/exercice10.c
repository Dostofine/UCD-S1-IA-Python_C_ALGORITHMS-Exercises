#include <stdio.h>
#include <string.h>
char chaine[200];
int main(){
    printf("saisir une chaine de caractere: ");
    scanf("%s",chaine);
    printf("la longeure de %s est %zu\n",chaine,strlen(chaine));
    return 0;
}