H=int(input("saisir le nombre des heures: "))
MIN=int(input("saisir le nombre des minutes: "))
if MIN<59 :
    MIN=MIN+1
elif MIN==59:
    MIN=0
    if H<23:
        H=H+1
    elif H==23:
        H=0
print(f"Dans une minute, il sera {H} heure(s) {MIN}")