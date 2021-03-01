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
	while True:
		n, d = map(int, input().split())
		if(n+d==0): break
		print(n**d)

try:
	T = 1
	for tc in range (1, T+1):
		solve(tc)

except EOFError:
	pass


sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

