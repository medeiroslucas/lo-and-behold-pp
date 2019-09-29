from math import ceil
from math import sqrt
f = input().split()

a = int(f[0])
b = int(f[1])


a1 = int(ceil(sqrt(a))-1)
b1 = int(sqrt(b))
#if(b1!=)
a1=(a1*(2*a1 + 1)*(a1+1))//6

b1=(b1*(2*b1 + 1)*(b1+1))//6

temp = b1-a1
print(temp%int((1e9+7)))
