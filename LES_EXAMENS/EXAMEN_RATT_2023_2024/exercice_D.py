def algo1():
    print("tous les nombres entiers triangulaire N pour n allant de 0 à 100 est :")
    for n in range(0,101):
        print(f" {(n*(n+1))/2} ")
def algo2():
    while True:
        N=int(input("saisir un entier N<100 : "))
        if 0<=N<100 :
            break
    verifier=False
    for i in range(0,100):
        if(N==(i*(i+1))/2):
            verifier=True 
    if(verifier):
        print(f"{N} est un nombre triangulaire.")
    else:
        print(f"{N} pas un nombre triangulaire.")
algo1()
algo2()
    