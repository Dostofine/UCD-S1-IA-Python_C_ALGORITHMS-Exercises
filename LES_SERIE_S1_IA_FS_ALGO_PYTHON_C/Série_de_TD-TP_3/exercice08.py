N_saisies=0
while True:
    N=float(input("saisir un nombre: "))
    N_saisies+=1
    user_choice=str(input("saisir non ou Non pour quite: "))
    if(user_choice=="non" or user_choice=="Non"):
        break
print("le nombre de valeurs saisies est: ",N_saisies)