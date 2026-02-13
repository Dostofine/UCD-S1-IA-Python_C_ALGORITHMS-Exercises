les_voyelles=['a','e','i','o','u','y']
chaine=str(input("saisir une chaine de caracteres: "))
taille=len(chaine)
conteur_voyelles=0
for i in range(0,taille):
    for j in range(0,6):
        if(chaine[i]==les_voyelles[j]):
            conteur_voyelles+=1
print("le nombre des voyelles est: ",conteur_voyelles);