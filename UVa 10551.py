import sys
import time
import math
import collections
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
start_time = time.time()
yes = "YES"; no = "NO"

def toDecimal(n, b):
	b = int(b); x = len(n)-1
	res = 0
	for i in range (len(n)):
		res += int(n[i])*(b**x)
		x -= 1
	return int(res)

def toMainBase(n, b):
	if n==0: return 0
	n = int(n); b = int(b)
	res = ""
	while n>0:
		r = n%b
		res += str(r)
		n //= b
	return res[::-1]

def solve(tc):
	# solve the problem here
	b, n, k = tc.split()
	p = toDecimal(n, b)
	q = toDecimal(k, b)
	ans = p%q
	print(toMainBase(ans, b))

try:
	while True:
		tc = input()
		if (tc=="0"): break
		solve(tc)

except EOFError:
	pass

sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

