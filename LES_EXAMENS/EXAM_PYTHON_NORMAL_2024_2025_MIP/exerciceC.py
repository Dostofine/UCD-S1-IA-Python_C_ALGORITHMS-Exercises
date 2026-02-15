while True:
    N=int(input("saisir un entier N>0: "))
    if N>0:
        break
S=0
for i in range(1,N+1):
    S=S+i**2
print(f"la somme S={S}")