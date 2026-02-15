while True:
    n=int(input("saisir un entier n>=0: "))
    if n>=0:
        break
U0=5
U1=7
Ui_1=U1
Ui_2=U0
print("{",end="")
if n==0 :
    print(f" {U0} ",end="")
elif n==1 :
    print(f" {U0}  {U1} ",end="")
else:
    print(f" {U0}  {U1} ",end="")
    for i in range(2,n+1):
        Ui=Ui_1+Ui_2
        print(f" {Ui} ",end="")
        Ui_2=Ui_1
        Ui_1=Ui

print("}")
