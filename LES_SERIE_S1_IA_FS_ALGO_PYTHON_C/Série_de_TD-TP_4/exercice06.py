T=[None for i in range(10)]
for i in range(0,10):
    T[i]=float(input(f"saisir le nombre {i+1}: "))
verifier=False 
X=float(input("saisir un nombre pour chercher: "))
for i in range(0,10):
    if T[i]==X :
        verifier=True 
if(verifier==True):
    print(f"{X} existe au moins une fois.")
else:
    print(f"{X} n'existe pas dant le tableau.")