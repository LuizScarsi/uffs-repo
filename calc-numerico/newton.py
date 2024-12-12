def f(x):
    return pow(x, 3) - 9*x + 3

def derivada_f(x):
    return pow(3*x, 2) - 9

def newton(x):
    return x - (f(x)/derivada_f(x))

x0 = 0
precisao1 = pow(10, -4)
precisao2 = pow(10, -4)

if abs(f(x0) < precisao1):
        print(f"x: {x0}")
else:
    for i in range(100):
        print(f"Iteração: {i}")
        x = newton(x0)
        
        if abs(x) < precisao1 or abs(x - x0) < precisao2:
            print(f"x: {x}\n")
            break

        x0 = x
        print(f"x: {x}")