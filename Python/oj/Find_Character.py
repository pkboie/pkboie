n = int(input())
i = 0

while i < n:
    s = input()
    st, c = s.split()
    if c in st:
        ans = st.index(c)
    else:
        ans = -1
    
    print(f'Case #{i+1}: {ans}')

    i = i + 1

