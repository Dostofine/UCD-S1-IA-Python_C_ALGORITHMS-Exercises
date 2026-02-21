T=[None for i in range(100)]
while True:
    n=int(input("saisir la taille de tableau :  "))
    if(n<100 and n>=1):
        break 
for i in range(0,n):
    T[i]=int(input(f"saisir l'entier numero {i+1}: "))
print("le tableau avant l'inverser: ")
for i in range(0,n):
    print(f" {T[i]} ",end="")
N=n-1
for i in range(0,n-1):
    for j in range(0,N):
        T[j],T[j+1]=T[j+1],T[j]
    N=N-1
print("\nle tableau avant l'inverser: ")
for i in range(0,n):
    print(f" {T[i]} ",end="")
print("")