import sys
import time
import math
import collections
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
start_time = time.time()
yes = "YES"; no = "NO"

f = [0]*100

def precal():
	f[0] = 1; f[1] = 2
	for i in range (2, 80):
		f[i] = f[i-1] + f[i-2]
	#print(f)
	f.sort(reverse=True)

def solve(tc):
	# solve the problem here
	n = int(input())
	ans = ""; N = n
	prevTaken = False
	for i in range(80):
		if f[i]<=n and not prevTaken:
			n -= f[i]
			ans += '1'
			prevTaken = True
		else:
			ans += '0'
			prevTaken = False
	print(f"{N} = {int(ans)} (fib)")

try:
	precal()
	for i in range(int(input())):
		solve(i)

except EOFError:
	pass

sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

