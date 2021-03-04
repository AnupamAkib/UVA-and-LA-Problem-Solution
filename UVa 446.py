import sys
import time
import math
import collections
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
start_time = time.time()
yes = "YES"; no = "NO"

def toDecimal(n):
	x = len(n)-1
	res = 0; b = 16
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

def toBinary(n):
	if n==0: return "0000000000000"
	n = int(n); b = 2
	res = ""
	while n>0:
		r = n%b
		res += str(r)
		n //= b
	l = len(res)
	for i in range (13-l):
		res += '0'
	return res[::-1]

def solve(tc):
	# solve the problem here
	s = input()
	a,s,b = s.split()
	if(s=="+"):
		print(f"{toBinary(toDecimal(a))} + {toBinary(toDecimal(b))} = {toDecimal(a)+toDecimal(b)}")
	else:
		print(f"{toBinary(toDecimal(a))} - {toBinary(toDecimal(b))} = {toDecimal(a)-toDecimal(b)}")

try:
	tt = int(input())
	for i in range(tt):
		solve(i)

except EOFError:
	pass

sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

