import sys
import time
import math
import collections

ONLINE_JUDGE = 0;
if ONLINE_JUDGE: sys.stdin = open('input.txt', 'r'); sys.stdout = open('output.txt', 'w')
start_time = time.time()
#################################

dp = [-1] * 1000000
def fibo():
	dp[1], dp[2] = 1, 1
	for i in range (3, 5000):
		dp[i] = dp[i-1] + dp[i-2]

try:
	fibo()
	while True:
		n = int(input())
		print(dp[n])

except EOFError:
	pass

#################################
sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

