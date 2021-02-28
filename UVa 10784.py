import sys
import time
import math
import collections

sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')
start_time = time.time()


def binary_srch(N):
	first=mid=res=0
	last = N+1
	while first <= last:
		mid = (first + last) // 2
		if (mid*(mid-3))//2 >= N:
			res = mid
			last = mid - 1
		elif (mid*(mid-3))//2 < N:
			first = mid + 1
	return res


try:
	tc = 1
	while True:
		N = int(input())
		if(not N): break
		ans = binary_srch(N)
		print(f"Case {tc}: {ans}")
		tc=tc+1

except EOFError:
	pass


sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

