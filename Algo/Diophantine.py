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

def diophantine(a, b, c):

	#assert c % gcd(a, b) == 0
	d,x,y = gcd(a,b)
	assert c%d==0
	x*=c//d
	y*=c//d
	return (x,y)

print(diophantine(1,1,7))