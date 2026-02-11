while True:
    n=int(input("saisir un entier positif n : "))
    if n>=0:
        break
U0=1
Un_1=U0
print("{",end=" ")
print(U0,end=" ")
for i in range(1,n):
    Un=Un_1*5+2
    Un_1=Un
    print(Un,end=" ")
print("}")
