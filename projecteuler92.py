import math

def number_chain(k):
    l = []
    lim = 10**k
    s = 0
    count = 0
    for i in range(2,lim):
        num = i
        # print "*****",num
        s = 0
        while 1:
            while num > 0:
                s += ((num%10)**2)
                #print num,s
                num /= 10
            # print s
            if s == 89:
                count += 1
                print i
                break
            elif s==1 :
                break
            else:
                #l.append(s)
                num = s
                s = 0



    return count


if __name__ == "__main__":

    k = int(raw_input())
    res = number_chain(k)
    print (res%((10**9) + 7))
