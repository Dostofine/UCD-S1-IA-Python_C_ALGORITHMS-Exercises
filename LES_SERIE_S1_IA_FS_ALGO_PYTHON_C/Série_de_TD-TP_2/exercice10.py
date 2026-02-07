N1=float(input("saisir le nombre 1: "))
N2=float(input("saisir le nombre 2: "))
op=str(input("saisir une opération ( +, - , / , * ): "))[0]
if(op == '+'):
    solution=N1+N2
    print(f"{N1} + {N2} = {solution}")
elif(op == '-'):
    solution=N1-N2
    print(f"{N1} - {N2} = {solution}")
elif(op == '*'):
    solution=N1*N2
    print(f"{N1} * {N2} = {solution}")
elif(op == '/'):
    if(N2!=0):
        solution=N1+N2
        print(f"{N1} + {N2} = {solution}")
    else:
        print("math error!")
else:
    print("invalide choix.")
