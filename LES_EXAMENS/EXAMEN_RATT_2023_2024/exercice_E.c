#include <stdio.h>
#include <string.h>
int max_taille,lettres_conteure,mot_taille[5];
char max_mot[15],mot[5][15],T[10];
int main(){
    for(int i=0;i<10;i++){
        while (1){
            printf("saisir le caractere numero %d minuscule: ",i+1);
            scanf(" %c", &T[i]);
            if(T[i]>='a' && T[i]<='z'){
                break;
            }
        }
    }
    for(int i=0;i<5;i++){
        do{
            printf("saisir le mot %d: ",i+1);
            scanf("%14s", mot[i]);
            mot_taille[i]=strlen(mot[i]);
            lettres_conteure=0;
            for(int l=0;l<mot_taille[i];l++){
                for(int j=0;j<10;j++){
                    if(mot[i][l]==T[j]){
                        lettres_conteure++;
                    }
                }
            }
        }while(!(lettres_conteure==mot_taille[i]));
    }
    max_taille=mot_taille[0];
    strcpy(max_mot, mot[0]);
    for(int i=1;i<5;i++){
        if(mot_taille[i]>max_taille){
            max_taille=mot_taille[i];
            strcpy(max_mot, mot[i]);
        }
    }
    printf("le plus long mot parmi les 5 et son nombre de caractères est %s de taille %d\n",max_mot,max_taille);
    return 0;
}