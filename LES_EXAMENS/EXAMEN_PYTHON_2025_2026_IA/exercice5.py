#declarer les matrices
M=[[None for j in range(3)] for i in range(3)]
N=[[None for j in range(3)] for i in range(3)]
G=[[None for j in range(3)] for i in range(3)]
#saisir les matrice M et N
for i in range(0,3):
    for j in range(0,3):
        M[i][j]=float(input(f"saisir la valeur de la case {i+1} {j+1} de la matrice M: "))
for i in range(0,3):
    for j in range(0,3):
        N[i][j]=float(input(f"saisir la valeur de la case {i+1} {j+1} de la matrice N: "))
#calcule la matrice G
for i in range(0,3):
    for j in range(0,3):
        G[i][j]=M[i][j]+N[i][j]
#affiche les matrices sur l'ecran
for i in range(0,3):
    for j in range(0,3):
        print(f" {M[i][j]} ",end="")
    print("")
print("")
for i in range(0,3):
    for j in range(0,3):
        print(f" {N[i][j]} ",end="")
    print("")
print("")
for i in range(0,3):
    for j in range(0,3):
        print(f" {G[i][j]} ",end="")
    print("")