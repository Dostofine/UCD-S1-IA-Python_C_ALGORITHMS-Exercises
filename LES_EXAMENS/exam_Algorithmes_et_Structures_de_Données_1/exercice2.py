while True:
    n=int(input("saisir un entier n<=20: "))
    m=int(input("saisir un entier m<=30: "))
    if(n<=20 and m<=30):
        break
M=[[None for j in range(m)] for i in range(n)]
for i in range(0,n):
    for j in range(0,m):
        M[i][j]=int(input(f"saisir l'entier positive {i},{j} <=999: "))
plus_grande_h=0
for i in range(0,n):
    for j in range(0,m):
        N_S=M[i][j]//100
        N_D=(M[i][j]%100)//10
        N_U=(M[i][j]%100)%10
        somme=N_S+N_D+N_U
        if(M[i][j]%somme==0):
            if(M[i][j]>plus_grande_h):
                plus_grande_h=M[i][j]
print("le plus grande nombre de Harshad de la matrix est ",plus_grande_h)