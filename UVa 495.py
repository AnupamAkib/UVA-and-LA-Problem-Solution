import sys
import time
import math
import collections
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
start_time = time.time()
yes = "YES"; no = "NO"

f = [0]*5009

def precal():
	f[0] = 0; f[1] = 1
	for i in range (2, 5001):
		f[i] = f[i-1] + f[i-2]
	#print(f)

def solve(tc):
	# solve the problem here
	n = tc
	print(f"The Fibonacci number for {n} is {f[tc]}")

try:
	precal()
	while True:
		t = int(input())
		solve(t)

except EOFError:
	pass

sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

