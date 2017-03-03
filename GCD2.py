def gcd(a,b):
	if b==0:
		return a
	else:
		return gcd(b,a%b)

t=int(input())
while t>0:
	f = input()
	a,b = f.split(' ')
	ans = gcd(int(a),int(b))
	print (ans)
	t-=1
