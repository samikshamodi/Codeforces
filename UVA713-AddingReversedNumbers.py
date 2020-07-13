t=int(input())

for i in range (t):
	x,y=input().split(' ')
	x=x[::-1]
	y=y[::-1]
	sum=int(x)+int(y)
	sum=str(sum)
	sum=sum[::-1]
	sum=sum.lstrip('0') 
	print(sum)

