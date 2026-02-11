S=0
i=0
while True:
    i+=1
    prix=float(input(f"saisir le prix numero {i}: "))
    if prix!=0:
        S=S+prix
    else:
        print("Merci d'utiliser ce logiciel.")
        break
M=S/(i-1)
print(f"la somme est {S}.")
print(f"le moyenne est {M} .")