def solve(t):
    sum = t
    n_d = 1
    while (True):
        d_sum = sum - 9 * (10**(n_d-1)) * n_d
        if d_sum < 0:
            break
        sum = d_sum
        n_d += 1
    if n_d == 1:
        print (sum)
        return
    num = (sum // n_d) + (10**(n_d-1)) -1
    pos = sum % n_d
    if pos == 0:
        s = str (num)
        print (s[len(s) -1 ])
    else:
        s = str (num + 1)
        print (s[pos-1])

q = int (input())
while q:
    t = int (input ())
    solve (t)
    q -= 1
    