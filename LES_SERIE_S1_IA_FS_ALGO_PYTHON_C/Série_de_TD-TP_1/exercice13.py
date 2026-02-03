n=int(input("saisir le nombre de secondes : "))
H=n//3600
MIN=n%3600//60
S=n%60
print(f"le nombre de secdondes {n}")
print(f"{H} h , {MIN} , {S} s ")
