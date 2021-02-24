import sys
import time
import math
import collections

ONLINE_JUDGE = 0;
if ONLINE_JUDGE: sys.stdin = open('input.txt', 'r'); sys.stdout = open('output.txt', 'w')
start_time = time.time()
#################################

while True:
	n, m = map(int, input().split())
	if n+m==0: break
	print(f"{n} things taken {m} at a time is {int(math.factorial(n)/(math.factorial(n-m)*math.factorial(m)))} exactly.")


#################################
sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

