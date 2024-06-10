# while n > 1: if n%2==0: n/2 else n = 3*n + 3
# Stops if a power of 2 else no.

# Power of 2 - ( n xor n-1 ) and n = n

n = int(input())

if (n^(n-1) & n)==n:
    print("TAK")

else:
    print("NIE")