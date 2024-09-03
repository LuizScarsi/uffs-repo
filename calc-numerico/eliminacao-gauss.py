N=3
a = [
    [2,2,1],
    [2,3,-1],
    [1,1,2]
]

b = [5,-1,3]

for k in range(N-1):
    for i in range(k+1, N):
        m=a[i][k]/a[k][k]
        a[i][k]=0;
        for j in range(k, N):
            a[i][j]=a[i][j]-m*a[k][j]
        b[i]=b[i]-m*b[k]

print(a)
print(b)