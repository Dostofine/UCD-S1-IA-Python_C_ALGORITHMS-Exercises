print("saisir les coordonnées X et Y d’un point.")
X=float(input("saisir X: "))
Y=float(input("saisir Y: "))
if X>0 and Y>0 :
    print("le point se trouve dans la parie A du plan.")
elif X>0 and Y<0 :
    print("le point se trouve dans la parie D du plan.")
elif X<0 and Y>0 :
    print("le point se trouve dans la parie B du plan.")
elif X<0 and Y<0 :
    print("le point se trouve dans la parie A du plan.")
else:
    print("le point est le centre du plan.")