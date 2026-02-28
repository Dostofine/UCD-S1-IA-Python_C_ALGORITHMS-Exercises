U=[None for i in range(100)]
V=[None for i in range(100)]
while True:
    N=int(input("saisir le nombre N<100 des composantes de les deux vecteur aver: "))
    if N<100:
        break
for i in range(0,N):
    U[i]=int(input(f"saisir le composant {i+1} de la vecteur U:  "))
    V[i]=int(input(f"saisir le composant {i+1} de la vecteur V  :  "))
#Calculer le vecteur somme de U et V.
print("le vecteur somme de U et V: ")
for i in range(0,N):
    print(f" {U[i]+V[i]} ")
#Calculer le produit scalaire de U et V.
produit_sca=0
for i in range(0,N):
    produit_sca+=U[i]*V[i]
print(f"le produit scalaire de U et V : {produit_sca}")
#Calculer le produit cartésien de U et V.
print("le produit cartésien de U et V: ")
for i in range(0,N):
    for j in range(0,N):
        print(f" ({U[i]},{V[j]}) ")
