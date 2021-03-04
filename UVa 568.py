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
	s = str(math.factorial(tc))
	s = s[::-1]
	for i in range(len(s)):
		if s[i] != '0':
			res = str(tc)+" -> "+s[i]
			print(res.rjust(10, ' '))
			return

try:
	while True:
		solve(int(input()))

except EOFError:
	pass

sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

