t = int(input())
for _ in range(t):
	n = int(input())
	if n%2 == 1:
		print("Bob")
	else:
		while n%4 == 0:
			n //= 4
		if n == 2:
			print("Bob")
		else:
			print("Alice")