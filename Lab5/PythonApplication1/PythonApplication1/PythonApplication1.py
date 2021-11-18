for n in range(1, 100):
    n_copy = n
    p = 0
    while n_copy > 0:
        p = p*10 + n_copy % 10
        n_copy = n_copy // 10
    if p==n:
        n_copy = n*n
        p = 0
        while n_copy>0:
            p = p*10 + n_copy % 10
            n_copy = n_copy // 10
        if p==n*n:
            print(n)
