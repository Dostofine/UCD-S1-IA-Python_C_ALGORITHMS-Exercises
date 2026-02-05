#include <stdio.h>
#include <string.h>
char nom1[100],nom2[100],nom3[100];
int main(){
    printf("saisir 3 noms : \n");
    scanf("%s %s %s",nom1,nom2,nom3);
    if(strcmp(nom1, nom2)<=0 && strcmp(nom2, nom3)<=0)
    {
        printf("les 3 noms sont rangés dans l’ordre alphabétique.");
    }
    else
    {
        printf("les 3 noms sont pas rangés dans l’ordre alphabétique.");
    }
    return 0;
}