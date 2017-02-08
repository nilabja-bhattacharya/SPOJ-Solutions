def f(n):
	ans=1
	for i in range(1,n+1):
		ans*=i;
	print(ans)

t=int(input())
while t>0:
	n=int(input())
	f(n)
	t-=1
