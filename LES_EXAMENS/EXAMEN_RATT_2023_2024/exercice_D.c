#include <stdio.h>
#include <stdbool.h>
int algorithme1(){
    int n;
    printf("tous les nombres entiers triangulaire N pour n allant de 0 à 100 est : {");
    for(n=0;n<=100;n++){
        printf(" %d ",(n*(n+1))/2);
    }
    printf("}\n");
    return 0;
}
int algorithme2(){
    int N;
    bool verifier_N;
    do{
        printf("saisir un entier N<100: ");
        scanf("%d",&N);
    }while(N>=100 || N<0);
    verifier_N=false;
    for(int i=0;i<=100;i++){
        if(((i*(i+1))/2)==N){
            verifier_N=true;
        }
    }
    if(verifier_N){
        printf("%d est un nombre triangulaire\n",N);
    }
    else{
        printf("%d pas un nombre triangulaire\n",N);
    }
    return 0;
}
int main(){
    algorithme1();
    algorithme2();
    return 0;
}