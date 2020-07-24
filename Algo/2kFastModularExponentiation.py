def FastModularExponentiation(b, k, m):
  t=1;
  k=2**k
  while(k>0):
    if k%2!=0:
      t=(t*b)%m;

    b=(b*b)%m;
    k=k//2

  # your code here
  return t%m
print(FastModularExponentiation(5,100000,1000000007))