
def gcd(a, b):
  #assert a >= b and b >= 0 and a + b > 0

  if b == 0:
    d, x, y = a, 1, 0

  else:
    (d, p, q) = gcd(b, a % b)
    x = q
    y = p - q * (a // b)

  assert a % d == 0 and b % d == 0
  assert d == a * x + b * y
  return (d, x, y)


def divide(a, b, n):
  d,x,y = gcd(a,n)
  #print(x,y)
  if(x<0):
    x=(x+n)%n
  ans=(x*b)%n
  print(ans)
  return ans
  

divide(4,8,5)