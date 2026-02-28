max=0
max_pos=0
for i in range(0,6):
    n=int(input(f"saisir l'entier numero {i+1}: "))
    if(n>max):
        max=n
        max_pos=i+1
print(max)
print(max_pos)