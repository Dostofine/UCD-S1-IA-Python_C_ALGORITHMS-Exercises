T=[None for i in range(10)]
for i in range(0,10):
    T[i]=int(input(f"saisir l'entier {i+1} : "))
min=T[0]
max=T[5]
for i in  range(0,10):
    if(i<=4):
        if T[i]<min:
            min=T[i]
    else:
        if T[i]>max :
            max=T[i]
print("le minimum de la 1ère moitié : ",min)
print("le maximum de sa 2ème moitié : ",max)