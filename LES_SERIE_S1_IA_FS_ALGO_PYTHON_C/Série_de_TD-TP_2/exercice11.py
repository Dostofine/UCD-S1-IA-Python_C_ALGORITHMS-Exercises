m=float(input("saisir le montant: "))
if(m<=5000 and m>=2000):
    m=m-m*0.01
elif(m>5000):
    m=m-m*0.02
print("le montant net est : ",m)