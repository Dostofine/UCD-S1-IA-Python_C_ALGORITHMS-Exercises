while True :
    n=int(input("saisir un entier positif inférieur à 999:  "))
    if(n<999):
        break
n_centaines=n//100
n_dizaines=n%100//10
n_unités=n%100%10
print("le nombre des centaines: ",n_centaines)
print("le nombre des dizaines: ",n_dizaines)
print("le nombre des unités : ",n_unités)