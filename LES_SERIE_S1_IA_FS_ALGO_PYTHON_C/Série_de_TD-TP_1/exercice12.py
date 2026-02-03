M=float(input("saisir la note de Math: "))
PH=float(input("saisir la note de Physique: "))
FR=float(input("saisir la note de Français: "))
AN=float(input("saisir la note de Anglais: "))
GEO=float(input("saisir la note de Géographie: "))
C_M,C_PH,C_FR,C_AN,C_GEO=5,5,4,2,3
somme=M*C_M + PH*C_PH + FR*C_FR +AN*C_AN + GEO*C_GEO
moyenne=somme/19
print("le moyenne est: ",moyenne)