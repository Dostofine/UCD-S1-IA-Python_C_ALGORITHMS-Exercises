T=[None for i in range(20)]
somme=0
for i in range(0,20):
    T[i]=float(input(f"saisir le nombre numero {i+1}: "))
    somme+=T[i]
print(f"la somme est {somme}.")