primos = list()

n = 2

while True:
    add = True 

    for p in primos:
        if n % p == 0:
            add = False
            break
    
    if add:
        primos.append(n)
        print(n)

    n += 1
