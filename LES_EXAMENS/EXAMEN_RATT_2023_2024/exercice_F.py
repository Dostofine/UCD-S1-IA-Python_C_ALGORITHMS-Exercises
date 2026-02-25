T=[None for i in range(99)]
while True:
    n=int(input("saisir un nombre entier n<100: "))
    if n<100 :
        break
for i in range(0,n):
    T[i]=float(input(f"saisir le reel numero {i+1}: "))
print("{",end="")
for i in range(0,n):
    print(f" {T[i]} ",end="")
print("}")
min=T[0]
max=T[0]
for i in range(1,n):
    if T[i]>max:
        max=T[i]
    if T[i]<min:
        min=T[i]
print(f"la valeur min de le tableau est {min}")
print(f"la valeur max de le tableau est {max}")
divis=max-min
for i in range(0,n):
    T[i]=T[i]/divis
print("{",end="")
for i in range(0,n):
    print(f" {T[i]:.3f} ",end="")
print("}")
