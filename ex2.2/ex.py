def le():
	while True:
		try:
			n1=int(input('Digite n1: '))
			break
		except:
			print 'Dado invalido, tente novamente.'
	while True:
		try:
			n2=int(input('Digite n2: '))
			break
		except:
			print 'Dado invalido, tente novamente.'
	return n1,n2
def impr(n1,n2):
	if n1<n2:
		while n1<n2-1:
			n1=n1+1
			print n1
	elif n2<n1:
		while n2<n1-1:
			n2=n2+1
			print n2
	return
n1,n2=le()
impr(n1,n2)
