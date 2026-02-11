chaine=""
i=1
while True:
    c=str(input(f"saisir le caractere numero {i}: "))[0]
    if c==".":
        break
    elif c=="0":
        chaine=chaine+" "
    else:
        i+=1
        chaine=chaine+c
print(chaine)