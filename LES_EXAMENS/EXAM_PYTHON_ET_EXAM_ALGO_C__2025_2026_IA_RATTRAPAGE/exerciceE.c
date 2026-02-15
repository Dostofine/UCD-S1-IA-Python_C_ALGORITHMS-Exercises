#include <stdio.h>
#include <string.h>
int taille,conteur_voyelles=0;
char chaine[1024];
char les_voyelles[6]={'a','e','i','o','u','y'};
int main(){
    printf("saisir une chaine de caracteres: ");
    scanf("%s",chaine);
    taille=strlen(chaine);
    for(int i=0;i<taille;i++){
        for(int j=0;j<6;j++){
            if(chaine[i]==les_voyelles[j])
            {
                conteur_voyelles++;
            }
        }
    }
    printf("le nombre des voyelles est: %d\n",conteur_voyelles);
    return 0;
}