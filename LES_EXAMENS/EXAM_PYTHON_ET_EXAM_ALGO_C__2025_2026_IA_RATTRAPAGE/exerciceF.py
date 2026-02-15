T=[[None for j in range(10)] for i in range(10)]
for i in range(0,10):
    for j in range(0,10):
        T[i][j]=int(input(f"saisir la case {i+1} {j+1}"))

#calcule et affich la somme des lignes
print("la somme des lignes.")
somme=0
for i in range(0,10):
    for j in range(0,10):
        somme=somme+T[i][j]
    print(somme)
    somme=0
#calcule et affich la somme des colonnes
print("la somme des colonnes.")
somme=0
for j in range(0,10):
    for i in range(0,10):
        somme=somme+T[i][j]
    print(somme)
    somme=0