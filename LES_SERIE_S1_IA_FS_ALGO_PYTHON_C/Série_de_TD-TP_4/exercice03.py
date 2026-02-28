T=[None for i in range(10)]
N_maj=0
N_let=0
for i in range(0,10):
    T[i]=str(input(f"saisir le caractere {i+1}: "))[0]
    if(T[i]>='A' and T[i]<='Z'):
        N_maj+=1
    elif(T[i]>='a' and T[i]<='z'):
        N_let+=1
print("le nombre de majuscules est : ",N_maj)
print("le nombre de lettres est : ",N_let)