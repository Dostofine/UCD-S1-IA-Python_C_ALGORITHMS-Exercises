N1=float(input("saisir un nombre N1: "))
N2=float(input("saisir un nombre N2: "))
N3=float(input("saisir un nombre N3: "))
if (N1<N2 and N2<N3):
    print("les deux nombres sont ordonnées par ordre croissant.")
elif (N1>N2 and N2>N3):
    print("les deux nombres sont ordonnées par ordre décroissant.")
else:
    print("les deux nombres non ordonnés.")