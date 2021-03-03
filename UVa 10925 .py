import sys
import time
import math
import collections
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
start_time = time.time()
yes = "YES"; no = "NO"

def solve(tc, n, f):
	# solve the problem here
	sum = 0
	for i in range (n):
		sum += int(input())
	print(f"Bill #{tc} costs {sum}: each friend should pay {sum//f}\n")

try:
	tc = 1
	while True:
		n, f = map(int, input().split())
		if(n+f==0): break
		solve(tc, n, f)
		tc=tc+1;

except EOFError:
	pass


sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

