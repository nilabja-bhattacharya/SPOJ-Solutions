while 1:
	arr=input().split(' ')
	k=arr[0]
	n=arr[1]
	if k=='0' and n=='0':
		break
	ans=int(int(k)**int(n))
	print (int(ans))
	
