import cmath as cm
import sys


def ismultipleof_3(n):
	if n%3 == 0:
		return 1
	else:
		return 0

def ismultipleof_5(n):
	if n%5 == 0:
		return 1
	else:
		return 0


t = int(raw_input( ))

for i in range(1,t+1):
		n = int(raw_input())
		sum = 0
		for j in range(1,n):
			if (ismultipleof_3(j) == 1 or ismultipleof_5(j) == 1):
				sum = sum + j
                print sum

