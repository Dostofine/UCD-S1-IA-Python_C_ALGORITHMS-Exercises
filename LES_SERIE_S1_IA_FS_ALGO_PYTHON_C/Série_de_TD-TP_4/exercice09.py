T=[[None for j in range(15)] for i in range(20)]
somme=0
elements_s_positif=0
somP=0
somN=0
for i in range(0,20):
    for j in range(0,15):
        T[i][j]=float(input(f"saisir l'élément de case {i+1} {j+1}: "))
        somme=somme+T[i][j]
        if T[i][j]>0:
            elements_s_positif+=1
            somP=somP+T[i][j]
        else:
            somN=somN+T[i][j]
max=T[0][0]
min=T[0][0]
for i in range(1,20):
    for j in range(1,15):
        if T[i][j]>max:
            max=T[i][j]
            pos_max=f"{i} {j}"
        if T[i][j]<min:
            min=T[i][j]
            pos_min=f"{i} {j}"
print(f"la somme de tous les éléments de la matrice est: {somme}")
print(f"le nombre des éléments strictement positifs est: {elements_s_positif}")
print(f"la somme des éléments positifs (SomP) est: {somP}")
print(f"la somme des éléments négatifs(SomN): {somN}")
print(f"le plus grand élément de la matrice {max} ainsi que sa position est {pos_max}")
print(f"le plus petit élément de la matrice {min} ainsi que sa position est {pos min}")