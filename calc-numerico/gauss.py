def eliminacao_gauss(A, b):
    """
    Resolve o sistema de equações lineares Ax = b usando o método de eliminação de Gauss.
    Parâmetros:
        A: matriz de coeficientes (lista de listas)
        b: vetor de constantes (lista)
    Retorna:
        x: vetor solução (lista)
    """
    
    # Número de equações
    n = len(A)
    
    # Passo 1: Eliminação
    for i in range(n):
        # Encontrar o maior elemento na coluna atual para evitar divisões por zero (pivotamento parcial)
        max_el = abs(A[i][i])
        max_row = i
        for k in range(i+1, n):
            if abs(A[k][i]) > max_el:
                max_el = abs(A[k][i])
                max_row = k
        
        # Trocar a linha 'i' pela linha 'max_row' (pivotamento)
        A[i], A[max_row] = A[max_row], A[i]
        b[i], b[max_row] = b[max_row], b[i]

        # Eliminação de Gauss: tornar os elementos abaixo do pivô em zero
        for k in range(i+1, n):
            factor = A[k][i] / A[i][i]
            for j in range(i, n):
                A[k][j] = A[k][j] - factor * A[i][j]
            # Ajustar o vetor 'b' também
            b[k] = b[k] - factor * b[i]
    
    # Passo 2: Substituição retroativa
    x = [0 for _ in range(n)]
    for i in range(n-1, -1, -1):
        x[i] = b[i] / A[i][i]
        for k in range(i-1, -1, -1):
            b[k] = b[k] - A[k][i] * x[i]

    return x

# Exemplo de uso
A = [
    [2, -1, 1],
    [3, 3, 9],
    [3, 3, 5]
]

b = [1, 0, 4]

solucao = eliminacao_gauss(A, b)
print(f"Solução: {solucao}")
