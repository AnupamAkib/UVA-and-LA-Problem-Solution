import sys
import time
import math
import collections
yes = "YES"; no = "NO"

def solve(tc):
	# solve the problem here
	n = int(input())
	p = int(input())
	a = (p % n)
	print(a)


try:
	t = int(input())
	for i in range (1, t+1):
		solve(i)

except EOFError:
	pass

