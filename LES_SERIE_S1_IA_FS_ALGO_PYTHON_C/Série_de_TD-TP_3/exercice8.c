#include <stdio.h>
#include <string.h>
int N_saisies;
float N;
char user_choice[10];
int main(){
    N_saisies=0;
    do{
        printf("saisir un nombre: ");
        scanf("%f",&N);
        N_saisies++;
        printf("saisir 'non' ou 'Non' pour quite.\n");
        scanf("%s",&user_choice);
    }while(strcmp(user_choice, "non")!=0 && strcmp(user_choice, "Non")!=0);
    printf("le nombre de valeurs saisies est: %d",N_saisies);
    return 0;
}