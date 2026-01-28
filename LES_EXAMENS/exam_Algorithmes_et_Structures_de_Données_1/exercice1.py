while True:
    n=int(input("saisir un entier n>=3: "))
    if(n>=3):
        break
print("U(1)=",4)
print("U(2)=",2)
Un_2=4
Un_1=2
for i in range(3,n+1):
    Un=(8*Un_1)-(4*Un_2)
    print(f"U({i})={Un}")
    Un_2=Un_1
    Un_1=Un