def algorithme1():
    N1=float(input("saisir un reel N1: "))
    N2=float(input("saisir un reel N2: "))
    if((N1>0 and N2>0 ) or (N1<0 and N2<0)):
        print("le produit et positif.")
    else:
        print("le produit et négatif.")
def algorithme2():
    N1=float(input("saisir un reel N1: "))
    N2=float(input("saisir un reel N2: "))
    if(N1==0 or N2==0):
        print("le produit et nul.")
    elif((N1>0 and N2>0 ) or (N1<0 and N2<0)):
        print("le produit et positif.")
    else:
        print("le produit et négatif.")
algorithme1()
algorithme2()