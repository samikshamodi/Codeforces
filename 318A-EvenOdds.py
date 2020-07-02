import math
n,k=map(int,input().split())
noofodd=math.ceil(n/2)
if(k>noofodd):
	print((k-noofodd)*2)
else:
	print((2*k)-1)