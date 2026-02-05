#include <stdio.h>
float N1,N2;
int algorithme1(){
    printf("saisir deux nombre N1 et N2: \n");
    scanf("%f %f",&N1,&N2);
    if((N1>0 && N2>0) || (N1<0 && N2<0))
        printf("le produit et positif. \n");
    else
        printf("le produit est négatif.\n");
    return 0;
}
int algorithme2(){
    printf("saisir deux nombre N1 et N2: \n");
    scanf("%f %f",&N1,&N2);
    if((N1>0 && N2>0) || (N1<0 && N2<0))
        printf("le produit et positif.\n");
    else if((N1==0) || (N2==0))
        printf("le produit est nul\n.");
    else
        printf("le produit est négatif.\n");
    return 0;
}
int main(){
    algorithme1();
    algorithme2();
}