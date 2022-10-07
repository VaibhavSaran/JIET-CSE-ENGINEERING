#sum of all primes below 2 million i.e. 2000000
#function to check for a prime number
import numpy as np
def sum_primes(n): 
    ps = np.ones(n>>1, dtype=bool) #boolean array of 2 mil 1s, we assume that all are prime unless proven otherwise
    print(int(n**.5 + 1) >> 1)
    for i in range(1, int(n**.5 + 1) >> 1): 
        j = 2 * i + 1 
        if ps[i]: 
            ps[(j * j) >> 1::j] = False 
        print(ps)
    print("Non zero function: ",np.nonzero(ps)[0])
    print("above multiplied with 2: ",np.nonzero(ps)[0] * 2)
    print("above multiplied with 2 and 1 added: ",np.nonzero(ps)[0] * 2 + 1)
    return np.sum(np.nonzero(ps)[0] * 2 + 1, dtype = 'i8') + 1 #data type for the numpy array is 8bit integer as the sum gets very big
x=int(input("Enter the number till where you want the primes summed: "))
print(sum_primes(x))