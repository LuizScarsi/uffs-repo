def f(x):
    return pow(x, 3) - 9*x + 3

def secante(x1, x0):
    return x1 - (f(x1)/(f(x1)-f(x0)))*(x1-x0)

x1 = 1
x0 = 0
precisao1 = 5*pow(10, -4)
precisao2 = 5*pow(10, -4)

if abs(f(x0) < precisao1):
    print(f"x: {x0}")
elif abs(f(x1)) < precisao1 or abs(x1-x0) < precisao2:
    print(f"x: {x1}")
else:
    for i in range(100):
        print(f"Iteração: {i}")
        x = secante(x0, x1)
        
        if abs(x) < precisao1 or abs(x - x1) < precisao2:
            print(f"x: {x}\n")
            break

        x0 = x1
        x1 = x
        print(f"x: {x}")