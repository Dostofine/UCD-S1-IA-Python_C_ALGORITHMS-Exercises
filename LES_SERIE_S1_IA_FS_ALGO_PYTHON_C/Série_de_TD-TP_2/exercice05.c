#include <stdio.h>
int age;
int main(){
    printf("saisir l'age de l'enfant >=6: ");
    scanf("%d",&age);
    if (age>=6 && age<8) 
        printf("le catégorie de l'enfant est Poussin.");
    else if (age>=8 && age<10)
        printf("le catégorie de l'enfant est Pupille.");
    else if (age>=10 && age<12)
        printf("le catégorie de l'enfant est Minime.");
    else if (age>=12)
        printf("le catégorie de l'enfant est Cadet.");
    return 0;
}