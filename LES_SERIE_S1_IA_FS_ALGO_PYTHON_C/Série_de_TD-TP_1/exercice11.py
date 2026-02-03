import math
print("saisir les coordonnées de A:")
X1=float(input("saisir X1: "))
Y1=float(input("saisir Y1: "))
print("saisir les coordonnées de B:")
X2=float(input("saisir X2: "))
Y2=float(input("saisir Y2: "))
D=math.sqrt((X2-X1)**2 + (Y2-Y1)**2)
print(f"la distance AB={D}")