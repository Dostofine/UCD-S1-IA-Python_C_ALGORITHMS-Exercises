def algo1():
    N=int(input("saisir un entier N: "))
    i=0
    while True:
        N=N+1
        print(N)
        i+=1
        if i==10 :
            break
def algo2():
    N=int(input("saisir un entier N: "))
    for i in range(0,10):
        N=N+1
        print(N)
algo1()
algo2()

