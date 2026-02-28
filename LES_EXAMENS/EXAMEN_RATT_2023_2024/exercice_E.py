mot_taille=[None for i in range(5)]
max_mot=[None for i in range(15)]
mot=[[None for i in range(15)] for j in range(5)] 
T=[None for i in range(10)]
for i in range(0,10):
    while True:
        T[i]=str(input(f"saisir le caractere numero {i+1} minuscule: "))[0]
        if(T[i]>='a' and T[i]<='z'):
            break
for i in range(0,5):
    while True:
        mot[i]=str(input(f"saisir le mot {i+1}: "))
        mot_taille[i]=len(mot[i])
        lettres_conteure=0
        for l in range(0,mot_taille[i]):
            for j in range(0,10):
                if(mot[i][l]==T[j]):
                    lettres_conteure+=1
        if(lettres_conteure==mot_taille[i]):
            break            
max_taille=mot_taille[0]
max_mot=mot[0]
for i in range(1,5):
    if(mot_taille[i]>max_taille):
        max_taille=mot_taille[i]
        max_mot=mot[i]
print(f"le plus long mot parmi les 5 et son nombre de caractères est {max_mot} de taille {max_taille}")