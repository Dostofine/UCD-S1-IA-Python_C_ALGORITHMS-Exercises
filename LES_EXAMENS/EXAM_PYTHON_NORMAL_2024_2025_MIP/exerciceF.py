M=[[None for i in range(3)] for i in range(3)]
for i in range(0,3):
    for j in range(0,3):
        M[i][j]=int(input(f"saisir la case {i+1} {j+1}: "))
for i in range(0,3):
    for j in range(0,3):
        print(f" {M[j][i]} ",end="")
    print("")
