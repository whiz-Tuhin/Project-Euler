import sys
import cmath as cm 


def sumfibeven(n):
	sumevenfib = 0  
	a,b = 1,1
	while a <= n:
		if a%2 == 0:
			sumevenfib = sumevenfib + a
		a,b = b,a+b
	return sumevenfib

t = int(raw_input())

for i in range(1,t+1):
	n = int(raw_input())
	print sumfibeven(n)

	    
