def algorithme1():
    A=5
    B=A+4
    A=A+1
    B=A-4
    print("==================")
    print("algorithme1")
    print(f"A={A}, B={B}")
def algorithme2():
    A=3
    B=10
    C=A+B
    B=A+B
    A=C
    print("==================")
    print("algorithme2")
    print(f"A={A} , B={B} , C={C}")
def algorithme3():
    A=5
    B=2
    A=B
    B=A
    print("==================")
    print("algorithme3")
    print(f"A={A} , B={B}")
    print("==================")
algorithme1()
algorithme2()
algorithme3()