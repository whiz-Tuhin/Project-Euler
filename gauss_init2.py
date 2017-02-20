#GAUSSIAN INTEGER

import cmath as cm
import sys 

final_div_sum = [0]
sum_divi = 0
n = sys.maxint(raw_input( ))

divi = [1]



def complex_divisor(divi,n,k):

	for i in range(1,n+1):
		 






for l in range(1,n+1):
	divi = [1]
	for i in range(2,l+1):   # real valued factors
		if l%i == 0:
			divi.append(i)

	print divi               #comment this line out

	k = int(l**0.5)

	# for i in range(1,k+1):
	
 #   		for j in range(1,k+1):

	# 		if i == j and (i and j)!= 1:
					
	# 				if sys.maxfloat(i)%(sys.maxfloat(i**2 + j**2)/sys.maxfloat(l)) == 0:   # a check for common factors within the gaussian integer\
	# 						divi.append(complex(i,j))
	# 						divi.append(complex(i,-j))
        
 #            		if(l%(i**2 + j**2) == 0):
	# 		    			divi.append(complex(i,j))
	# 		    			divi.append(complex(i,-j))
    
    complex_divisor(divi,k)
    


    
    #comment these 2 lines out
    # print "%d ->" % l
	print divi		    			


	sum_divi = sum(list(divi))
	final_div_sum.append(sys.maxint(sum_divi.real))


#print final_div_sum
print sum(list(final_div_sum))	



				



