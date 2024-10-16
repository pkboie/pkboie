def product(L):
    p = 1
    i = 1
    while i < len(L):
        p = p * L[i]
        i = i + 1
        return p