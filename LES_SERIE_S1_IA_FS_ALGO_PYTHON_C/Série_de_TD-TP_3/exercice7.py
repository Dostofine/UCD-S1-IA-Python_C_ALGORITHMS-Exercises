T=[None for i in range(1000)]
i=0
while True:
    T[i]=float(input(f"saisir le nombre numero {i+1}: "))
    i+=1
    if(i==1000 or T[i-1]==0):
        break 
max=T[0]
max_pos=0
for j in range(0,i):
    if T[j]>=max :
        max=T[j]
        max_pos=j+1
print("le plus grand parmi ces nombres est: ",max)
print("et sa position est: ",max_pos)