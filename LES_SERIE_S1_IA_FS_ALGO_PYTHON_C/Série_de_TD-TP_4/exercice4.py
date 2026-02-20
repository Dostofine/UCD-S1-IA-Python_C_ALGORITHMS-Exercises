T=[None for i in range(40)]
somme=0
for i in range(0,40):
    T[i]=float(input(f"saisir la note {i+1}: "))
    somme+=T[i]
max=T[0]
moyenne=somme/40
Notes_SS_M=0
for i in range(0,40):
    if T[i]>max :
        max=T[i]
    if T[i]>moyenne :
        Notes_SS_M+=1
C_max=0
for i in range(0,40):
    if T[i]==max:
        C_max+=1
print(f"le nombre des notes supérieures strictement à la moyenne {moyenne} est {Notes_SS_M}.")
print("le nombre d’occurrence de la note maximale est ",C_max)