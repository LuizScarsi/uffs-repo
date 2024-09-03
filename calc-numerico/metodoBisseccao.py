import math

def f(x):
    return pow(x, 3) -(9*x) + 3

def f2(x):
    return x*math.log(x) - 1

def bisseccao(a,b):
    return (a+b)/2

def posicao_falsa(a, b, fa, fb):
    return (a*fb - b*fa)/(fb-fa)

def print_iteracoes(intervalo, iteracoes, metodo, f, raiz=pow(10, -3)):
    xi=[]
    for i in range(iteracoes):
        print(f"Iteração: {i}")
        print(f"a: ")
        fa = f(intervalo[0])
        print(f"f(a): {fa}")
        fb = f(intervalo[0])
        print(f"f(b): {fb}")
        xi.append(metodo(intervalo[0], intervalo[1], fa, fb))
        print("xi: ", end="")
        print(xi)
        fxi = f(xi[i])
        if fa*fxi<0:
            intervalo[1] = xi[i]
        elif fa*fxi>0:
            intervalo[0] = xi[i]
        print(f"f(xi): {fxi}\n")

def print_f1_bisseccao(intervalo, iteracoes, raiz):
    print("Função 1:")
    xi=[]
    for i in range(iteracoes):
        print(f"Iteração: {i}")
        print(f"a: ")
        fa = f(intervalo[0])
        print(f"f(a): {fa}")
        fb = f(intervalo[0])
        print(f"f(b): {fb}")
        xi.append(bisseccao(intervalo[0], intervalo[1]))
        print("xi: ", end="")
        print(xi)
        fxi = f(xi[i])
        if fa*fxi<0:
            intervalo[1] = xi[i]
        elif fa*fxi>0:
            intervalo[0] = xi[i]
        print(f"f(xi): {fxi}\n")

def print_f2_bisseccao(intervalo, iteracoes, raiz):
    print("Função 2:")
    xi=[]
    for i in range(iteracoes):
        print(f"Iteração: {i}")
        print(f"a: ")
        fa = f2(intervalo[0])
        print(f"f(a): {fa}")
        fb = f2(intervalo[0])
        print(f"f(b): {fb}")
        xi.append(bisseccao(intervalo[0], intervalo[1]))
        print("xi: ", end="")
        print(xi)
        fxi = f2(xi[i])
        if fa*fxi<0:
            intervalo[1] = xi[i]
        elif fa*fxi>0:
            intervalo[0] = xi[i]
        print(f"f(xi): {fxi}\n")

intervalo = [0,1]
iteracoes = 10
raiz = pow(10, -3)

print_iteracoes(intervalo, iteracoes, posicao_falsa, f)