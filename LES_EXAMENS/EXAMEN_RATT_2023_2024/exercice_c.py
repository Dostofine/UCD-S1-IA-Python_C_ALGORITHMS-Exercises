while True:
    n=int(input("saisir un entier n>0: "))
    if n>0 :
        break 
x=float(input("saisir un reel x : "))
sn=0
for i in range(1,n+1):
    sn+=i*(x**i)
print(f"sn={sn}")