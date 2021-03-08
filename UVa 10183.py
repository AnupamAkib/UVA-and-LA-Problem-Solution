import sys
import time
import math
import collections
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
start_time = time.time()
yes = "YES"; no = "NO"

f = [0]*600

def lower_bound(n):
	first = 0; last = 500
	mid = idx = 0
	while first<=last:
		mid = (first + last) // 2;
		if f[mid]>=n:
			last = mid - 1
			idx = mid
		else: first = mid + 1
	return idx

def upper_bound(n):
	first = 0; last = 500
	mid = idx = 0
	while first<=last:
		mid = (first + last) // 2;
		if f[mid]<=n:
			first = mid + 1
			idx = mid
		else: last = mid - 1
	return idx

def precal():
	f[0] = 1; f[1] = 2
	for i in range (2, 500):
		f[i] = f[i-1] + f[i-2]
	#print(f)

def solve(a, b):
	# solve the problem here
	a = lower_bound(a)
	b = upper_bound(b)
	#print(f"a={a}, b={b}")
	print(b - a + 1)

try:
	precal()
	while True:
		a, b = map(int, input().split())
		if (a+b==0): break
		solve(a,b)

except EOFError:
	pass

sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

