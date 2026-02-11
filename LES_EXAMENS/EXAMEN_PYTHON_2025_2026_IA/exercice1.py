while True:
    N=int(input("saisir un entier N>0: "))
    if N>0:
        break
S=0
for i in range(1,N+1):
    S=S+i**i
print(f"S={S}")