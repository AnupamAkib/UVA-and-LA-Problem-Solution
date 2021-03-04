import sys
import time
import math
import collections
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
start_time = time.time()
yes = "YES"; no = "NO"

def toDecimal(n, b):
	n = str(n); b = int(b)
	x = len(n)-1
	res = 0;
	for i in range (len(n)):
		z = n[i]
		if(z=='A'): z = 10
		if(z=='B'): z = 11
		if(z=='C'): z = 12
		if(z=='D'): z = 13
		if(z=='E'): z = 14
		if(z=='F'): z = 15
		res += int(z)*(b**x)
		x -= 1
	return int(res)

def toAnyBase(n, b):
	if n==0: return '0'
	n = int(n); b = int(b)
	res = ""
	while n>0:
		r = n%b
		if r==10: res += 'A'
		elif r==11: res += 'B'
		elif r==12: res += 'C'
		elif r==13: res += 'D'
		elif r==14: res += 'E'
		elif r==15: res += 'F'
		else: res += str(r)
		n //= b
	return res[::-1]

def solve(tc):
	# solve the problem here
	n, b1, b2 = tc.split()
	s = toAnyBase(toDecimal(n, b1), b2)
	s = s.rjust(7, ' ')
	if len(s)>7:
		print("  ERROR")
		return
	print(s)

try:
	while True:
		s = input()
		solve(s)

except EOFError:
	pass

sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

