T=[None for i in range(10)]
for i in range(0,10):
    T[i]=int(input(f"saisir l'entier numero {i+1}: "))
while True:
    verifier=True
    for i in range(0,9):
        if T[i]>T[i+1]:
            temp=T[i]
            T[i]=T[i+1]
            T[i+1]=temp
            verifier=False
    if verifier==True:
        break
for i in range(0,10):
    if T[i]!=0:
        print(T[i])
