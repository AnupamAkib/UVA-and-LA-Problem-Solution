import sys
import time
import math
import collections
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
start_time = time.time()
yes = "YES"; no = "NO"

dp = [0]*100
f = [0]*100

def precal():
	f[0] = f[1] = 1
	dp[0] = 1; dp[1] = 2
	for i in range (2, 57):
		f[i] = f[i-1]+f[i-2]
		dp[i] = dp[i-1] + f[i]

def solve(tc):
	# solve the problem here
	n = int(input())
	print(f"Scenario #{tc+1}:")
	print(dp[n-1]+1, end="\n\n")

try:
	precal()
	t = int(input())
	for i in range (t):
		solve(i)

except EOFError:
	pass

sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

