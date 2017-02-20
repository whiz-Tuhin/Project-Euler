import sys

def gcd(a,b):
	if b==0:
		return a;
	else:
		return gcd(b,a%b)

def lcm(list,length):
    if(length == 0):
    	return 
	res = res*list[length-1] / gcd(res,list[length-1])
	lcm(list,length-1)

      

t = int(raw_input())

for i in range(1,t+1):
	res = 1
	l = []
	n = int(raw_input())
	for j in range(1,n+1):
		l.append(j)

	size = len(l)
	lcm(l,size)
	print res


    
    