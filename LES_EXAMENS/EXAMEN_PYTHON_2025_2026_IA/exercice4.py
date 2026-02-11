T=[None for i in range(40)]
for i in range(0,40):
    while True:
        T[i]=float(input(f"saisir la note {i+1} entre 0 et 20: "))
        if (T[i]>=0 and T[i]<=20) :
            break
        else:
            print(f"la note {T[i]} pas entre 0 et 20!.")
verifier=True
while True:
    for i in range(0,39):
        if T[i]<T[i+1]:
            verifier=False
    if verifier==False:
        for i in range(0,39):
            if T[i]<T[i+1]:
                temp=T[i]
                T[i]=T[i+1]
                T[i+1]=temp
        verifier=True
    else:
        break
for i in range(0,40):
    print(f"la note numero {i+1}: {T[i]}.")
    if T[i]>=16:
        print("la mention Tres bien.")
    elif T[i]>=14:
        print("la mention  bien.")
    elif T[i]>=12:
        print("la mention Assez bien.")
    elif T[i]>=10:
        print("la mention Passable.")
    else:
        print("la mention Ajourne.")