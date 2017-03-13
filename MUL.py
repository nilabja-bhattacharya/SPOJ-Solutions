def mul(l1,l2):
	ans = l1*l2
	print (int(ans))

t = int(input())
while t>0:
	val=input();
	l1,l2= val.split(' ')
	mul(int(l1),int(l2));
	t-=1
