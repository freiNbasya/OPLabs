def formula( Number,  korin,  tocnist):
    obch = Number
    for  i in range(tocnist): 
        obch = (1 / korin)*(Number / (obch**(korin - 1)) + (korin - 1) * obch)
    return obch

k1 = 3
k2 =6
k3=7
a = int(input("a: "))
n = int(input("n: "))

if a > 0: 
    pidraxunok = (formula(a, k1, n) - formula(a*a+1,k2,n)) / (1 + formula(3+a, k3,n))
    print(pidraxunok)
