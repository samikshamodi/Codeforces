def ExtendedEuclid(a, b):

	if b == 0:
		d, x, y = a, 1, 0

	else:
		(d, p, q) = ExtendedEuclid(b, a % b)
		x = q
		y = p - q * (a // b)

	assert a % d == 0 and b % d == 0
	assert d == a * x + b * y
	return (d, x, y)


def ChineseRemainderTheorem(n1, r1, n2, r2):
  (d,x, y) = ExtendedEuclid(n1, n2)
  n=r2*n1*x+r1*n2*y

  return n%(n1*n2)


print(ChineseRemainderTheorem(686579304, 295310485, 26855093, 8217207))