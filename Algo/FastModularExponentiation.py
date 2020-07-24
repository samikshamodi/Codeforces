def FastModularExponentiation(b, e, m):
  if e==0:
  	return 1;
  if e==1:
  	return b%m

  t=FastModularExponentiation(b,e//2,m);
  t=(t*t)%m;

  if e%2==0:
  	return t;
  else:
  	return ((b%m)*t)%m

#print(FastModularExponentiation(5,100000,1000000007))
