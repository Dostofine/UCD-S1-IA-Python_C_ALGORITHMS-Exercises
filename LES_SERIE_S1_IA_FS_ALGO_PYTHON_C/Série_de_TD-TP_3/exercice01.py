nb=int(input(""))
def TantQueFaire(nb):
    print("Tant Que Faire :")
    k=1
    while(k!=nb+1):
        print(k)
        k+=1
def RépéterJusquà(nb):
    print("Répéter Jusqu'à :")
    k=1
    while True:

        print(k)
        if nb==k:
            break
        k+=1
TantQueFaire(nb)
RépéterJusquà(nb)