# a = 0
# b = 1
# precisao1 = 5 * pow(10, -4)
# precisao2 = precisao1 
# iteracoes = 10
# def f(x):
#     return pow(x, 3) - 9*x + 3

# def posicao_falsa(a, b, fa, fb):
#     return ((a*fb)-(b*fa))/(fb-fa)

# print(f"{precisao1=}, {precisao2=}")
# for i in range(iteracoes):
#     print(f"Iteração: {i}")

#     print(f"{a=}, {b=}")

#     if (b-a) < precisao1:
#         x = (a+b)/2
#         break

#     fa = f(a)
#     print(f"{fa=}")
#     fb = f(b)
#     print(f"{fb=}")
#     if abs(fa) < precisao2 or abs(fb) < precisao2:
#         x = a
#         break

#     x = posicao_falsa(a, b, fa, fb)
#     print(f"{x=}")
#     fx = f(x)
#     print(f"{fx=}\n")

#     if fx < precisao2:
#         print("fx menor q precisao 2")
#         break

#     if fa*fx > 0:
#         a = x
#     else:
#         b = x
    
#     if b-a < precisao1:
#         print("b-a é menor q a precisao 1")
#         x = (a+b)/2
#         break

a = 0
b = 1
precisao1 = 5 * pow(10, -4)
precisao2 = precisao1
iteracoes = 10

def f(x):
    return pow(x, 3) - 9 * x + 3

def posicao_falsa(a, b, fa, fb):
    return ((a * fb) - (b * fa)) / (fb - fa)

print(f"{precisao1=}, {precisao2=}")

for i in range(iteracoes):
    print(f"Iteração: {i}")
    print(f"{a=}, {b=}")

    fa = f(a)
    fb = f(b)

    print(f"{fa=}")
    print(f"{fb=}")

    # Critério de parada baseado no intervalo e no valor da função
    if (b - a) < precisao1:
        print("Intervalo menor que a precisão 1")
        x = posicao_falsa(a, b, fa, fb)
        break
    if abs(fa) < precisao2:
        print("Valor de f(a) menor que a precisão 2")
        x = a
        break
    if abs(fb) < precisao2:
        print("Valor de f(b) menor que a precisão 2")
        x = b
        break

    # Calcula a posição falsa
    x = posicao_falsa(a, b, fa, fb)
    fx = f(x)
    print(f"{x=}")
    print(f"{fx=}\n")

    # Critério de parada baseado no valor de f(x)
    if abs(fx) < precisao2:
        print("f(x) menor que a precisão 2")
        break

    # Atualiza os valores de a ou b
    if fa * fx > 0:
        a = x
    else:
        b = x

print(f"A raiz aproximada é: {x}")
