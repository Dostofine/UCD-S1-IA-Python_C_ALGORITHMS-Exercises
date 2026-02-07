n=int(input("saisir le nombre des photocopies : "))
if(n<=10):
    facture=n*0.1
elif(n>10 and n<-30):
    facture=10*0.1+(n-10)*0.09
else:
    facture=10*0.1+20*0.09+(n-10)*0.08
print("la facture est : ",facture)