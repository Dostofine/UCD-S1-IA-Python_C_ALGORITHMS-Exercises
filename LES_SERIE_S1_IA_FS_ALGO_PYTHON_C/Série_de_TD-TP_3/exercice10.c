#include <stdio.h>
#include <string.h>
int i;
char c,chaine[100];
int main(){
    i=0;
    do{
        i++;
        printf("saisir le caractere %d : ",i);
        scanf(" %c",&c);
        if(c!='.')
        {
            int len=strlen(chaine);
            if(c=='0')
            {
                chaine[len]= ' ';
                chaine[len+1]= '\0';

            }
            else
            {
                chaine[len]=c;
                chaine[len+1]='\0';
            }
        }
    }while(c!='.');
    printf("%s\n",chaine);
}