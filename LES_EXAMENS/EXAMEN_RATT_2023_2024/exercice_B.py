a=float(input("saisir le nombre 1: "))
b=float(input("saisir le nombre 2: "))
op=str(input("saisir une des les operation suivant {+,-,*,/}: "))[0]
if(op=='+'):
    print(f"{a} + {b} = {a+b}")
elif(op=='-'):
    print(f"{a} - {b} = {a-b}")
elif(op=='*'):
    print(f"{a} * {b} = {a*b}")
elif(op=='/' and b!=0):
    print(f"{a} / {b} = {a/b}")