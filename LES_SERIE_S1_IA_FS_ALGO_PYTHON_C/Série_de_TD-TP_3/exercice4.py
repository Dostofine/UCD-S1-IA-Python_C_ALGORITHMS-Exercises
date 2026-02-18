N=int(input("saisir un entier N: "))
somme=0
for i in range(1,N):
    if N%i==0:
        somme=somme+i
if somme==N:
    print(f"le nombre {N} est parfait.")
else:
    print(f"le nombre {N} pas parfait.")