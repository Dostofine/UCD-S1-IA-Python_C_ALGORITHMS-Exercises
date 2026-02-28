T=[None for i in range(3)]
for i in range(0,3):
    T[i]=int(input(f"saisier l'entier numero {i+1}: "))
min=T[0]
for i in range(0,3):
    if T[i]<=min :
        min=T[i]
        min_pos=i+1
print("le plus petit élément de ce tableau est : ",min)
print("et sa position est ",min_pos)
