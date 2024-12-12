def eliminacao_gauss_jordan(A, b):
    """
    Resolve o sistema de equações lineares Ax = b usando o método de eliminação de Gauss-Jordan.
    Parâmetros:
        A: matriz de coeficientes (lista de listas)
        b: vetor de constantes (lista)
    Retorna:
        x: vetor solução (lista)
    """
    n = len(A)

    # Formar a matriz aumentada (A|b)
    for i in range(n):
        A[i].append(b[i])

    # Passo 1: Aplicar a eliminação de Gauss-Jordan para obter a matriz identidade
    for i in range(n):
        # Pivoteamento parcial para evitar divisões por zero
        max_el = abs(A[i][i])
        max_row = i
        for k in range(i+1, n):
            if abs(A[k][i]) > max_el:
                max_el = abs(A[k][i])
                max_row = k

        # Trocar a linha i pela linha max_row
        A[i], A[max_row] = A[max_row], A[i]

        # Normalizar a linha i para que o pivô seja 1
        piv = A[i][i]
        for j in range(i, n+1):
            A[i][j] /= piv

        # Eliminar todos os outros elementos na coluna i, exceto o pivô
        for k in range(n):
            if k != i:
                factor = A[k][i]
                for j in range(i, n+1):
                    A[k][j] -= factor * A[i][j]

    # Passo 2: Extrair a solução do sistema a partir da matriz aumentada
    x = [A[i][-1] for i in range(n)]

    return x

# Exemplo de uso
A = [
    [2, -1, 1],
    [3, 3, 9],
    [3, 3, 5]
]

b = [1, 0, 4]

solucao = eliminacao_gauss_jordan(A, b)
print(f"Solução: {solucao}")
