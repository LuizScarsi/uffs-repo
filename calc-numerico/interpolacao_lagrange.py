x0 = 2.7

n=4 # grau polinomio interpolador
x=[-1,0,1,2,3]
y=[-7,1,5,11,25]

soma = 0
for i in range(n):
    prod = 1
    for k in range(n):
        if k == i:
            continue
        prod *= (x0-x[k])/(x[i]-x[k])
    soma = soma + y[i]*prod
    print(f"{soma=}") #52.81