X=float(input("saisir un reel X : "))
Y=float(input("saisir un reel Y : "))
a=int(input("saisir un reel a : "))
b=int(input("saisir un reel b : "))
chaîne1=str(input("saisir chaîne1: "))
chaîne2=str(input("saisir chaîne2: "))
type_1=type((5*X)+a+(b/4)).__name__
type_3=type(chaîne1 and chaîne2).__name__
type_4=type(len("Salut" and chaîne1)).__name__
print("le type de 1 est ",type_1)
print("le type de 2 est error")
print("le type de 3 est ",type_3)
print("le type de 4 est ",type_4)
