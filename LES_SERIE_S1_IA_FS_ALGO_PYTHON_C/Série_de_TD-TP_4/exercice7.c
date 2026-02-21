#include <stdio.h>
int N,produit_sca,U[100],V[100];
int main(){
    do{
        printf("saisir le nombre N<100 des composantes de les deux vecteur aver: ");
        scanf("%d",&N);
    }while(N>=100 || N<1);
    // lire U et V
    for(int i=0;i<N;i++){
        printf("saisir le composant %d de la vecteur U: ",i+1);
        scanf("%d",&U[i]);
        printf("saisir le composant %d de la vecteur V: ",i+1);
        scanf("%d",&V[i]);
    }
    //Calculer le vecteur somme de U et V.
    printf("le vecteur somme de U et V: \n");
    for(int i=0;i<N;i++){
        printf("%d\n",U[i]+V[i]);
    }
    //Calculer le produit scalaire de U et V.
    printf("le produit scalaire de U et V: \n");
    produit_sca=0;
    for(int i=0;i<N;i++){
        produit_sca+=U[i]*V[i];
    }
    printf("%d\n",produit_sca);
    //Calculer le produit cartésien de U et V.
    printf("le produit cartésien de U et V: \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("(%d,%d)\n",U[i],V[j]);
        }
    }
    return 0;
}
