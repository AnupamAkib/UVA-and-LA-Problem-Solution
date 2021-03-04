import sys
import time
import math
import collections
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
start_time = time.time()
yes = "YES"; no = "NO"

dp = [0]*105

def precal():
	dp[0] = dp[1] = 1
	for i in range(2, 100):
		dp[i] = dp[i-1] + dp[i-2]

def solve(tc):
	# solve the problem here
	n = tc
	total = 0
	for i in range (n+1):
		total += dp[i]
	print(f"{total-dp[n]} {total}")

try:
	precal()
	while True:
		tt = int(input())
		if tt == -1:
			break
		solve(tt)

except EOFError:
	pass

sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

