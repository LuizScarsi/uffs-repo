# a=0
# b=1
# precisao = pow(10, -3)
# def bisseccao(a,b):
#     return (a+b)/2

# def f(x):
#     return pow(x, 3) - 9*x + 3

# for i in range(10):
#     print(f"Iteração: {i}")
#     if (b-a) < precisao:
#         x = (a+b)/2
#         break

#     fa = f(a)
#     print(f"{fa=}")

#     fb = f(b)
#     print(f"{fb=}")

#     x = bisseccao(a,b)
#     print(f"{x=}")

#     fx = f(x)
#     print(f"{fx=}")

#     print("\n")
#     if fa*fx > 0:
#         a = x
#         if (b-a) < precisao:
#             x = (a+b)/2
#             break
#     else:
#         b = x
#         if (b-a) < precisao:
#             x = (a+b)/2
#             break

# print(f"A raiz é: {x}")

a = 0
b = 1
precisao = pow(10, -3)

def bisseccao(a, b):
    return (a + b) / 2

def f(x):
    return pow(x, 3) - 9 * x + 3

for i in range(100):
    print(f"Iteração: {i}")
    
    # Calcula o ponto médio
    x = bisseccao(a, b)
    fx = f(x)

    print(f"{a=}, {b=}, {x=}, {fx=}\n")

    # Critério de parada: se o intervalo é menor que a precisão ou se f(x) está suficientemente próximo de zero
    if (b - a) < precisao or abs(fx) < precisao:
        break
    
    # Atualiza o intervalo com base no sinal de fa * fx
    if f(a) * fx > 0:
        a = x
    else:
        b = x

print(f"{precisao=}")
print(f"A raiz aproximada é: {x}")
