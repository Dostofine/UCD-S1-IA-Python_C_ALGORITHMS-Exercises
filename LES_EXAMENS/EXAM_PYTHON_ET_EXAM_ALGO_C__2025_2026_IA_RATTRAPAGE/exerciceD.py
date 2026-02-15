while True:
    n=int(input("saisir un entier n>=0 "))
    if n>=0:
        break
while True:
    a=int(input("saisir un entier a!=0 "))
    if n!=0:
        break
U0=a
Ui_1=U0
print(f"[ {U0} ",end="")
for i in range(0,n):
    Ui=7*(Ui_1+a)
    print(f" {Ui} ",end="")
    Ui_1=Ui
print("]")