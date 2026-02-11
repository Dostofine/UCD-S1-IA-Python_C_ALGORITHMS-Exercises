n_pair=0
n_impair=0
n_total=0
while True:
    n=int(input("saisir un entier n>=0: "))
    if(n>=0):
        n_total+=1
        if((n%2)==0):
            n_pair+=1
        else:
            n_impair+=1
    else:
        break
print(f"le nombre d’entiers pairs est {n_pair}")
print(f"le nombre d’entiers impairs est {n_impair}")
print(f"le nombre total d’entiers saisis {n_total}")