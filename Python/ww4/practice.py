x = input()
str, nu = x.split()
nu = int(nu)
for i in str:
    a = ord(i) + nu
    print(chr(a), end='')