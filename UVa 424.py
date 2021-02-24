import sys
import time
import math
import collections

ONLINE_JUDGE = 0;
if ONLINE_JUDGE: sys.stdin = open('input.txt', 'r'); sys.stdout = open('output.txt', 'w')
start_time = time.time()
#################################

sum = 0
while True:
	n = int(input())
	if not n: break
	sum += n
print(sum)

#################################
sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

