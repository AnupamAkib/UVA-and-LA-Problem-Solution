import sys
import time
import math
import collections
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
start_time = time.time()
yes = "YES"; no = "NO"

def solve(tc):
	# solve the problem here
	a, s, b = input().split()
	a = int(a)
	b = int(b)
	g = math.gcd(a, b)
	print(f"{a//g} / {b//g}")

try:
	T = int(input())
	for i in range (T):
		solve(i)

except EOFError:
	pass


sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

