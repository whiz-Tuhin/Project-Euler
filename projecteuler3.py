def primes_upto(limit):
    is_prime = [False] * 2 + [True] * (limit - 1) 
    for n in range(int(limit**0.5 + 1.5)): # stop at ``sqrt(limit)``
        if is_prime[n]:
            for i in range(n*n, limit+1, n):
                is_prime[i] = False
    return [i for i, prime in enumerate(is_prime) if prime]

def isfactorof(limit,n):
	if limit%n == 0:
		f.append(n)

t = long(raw_input())
f = []
for i in range(1,t+1):
	n = long(raw_input())
	p = []
	p = primes_upto(n)
	for j in p:
		isfactorof(n,j)
		#print f 
	
	print f[-1]

