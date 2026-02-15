for i in range(1,10):
    for j in range(0,10):
        for l in range(0,10):
            nombre=i*100+j*10+l
            if(i**3+j**3+l**3==nombre):
                print(nombre)