while True:
    n=int(input("saisir un entier n>0: "))
    if n>0:
        break
X=float(input("saisir un reel X: "))
S=0
for i in range(1,n+1):
    S=S+i*(X**i)
print(f"la somme S={S}")