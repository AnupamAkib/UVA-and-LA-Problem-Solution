import sys
import time
import math
import collections
#sys.stdin = open('input.txt', 'r')
#sys.stdout = open('output.txt', 'w')
start_time = time.time()
yes = "YES"; no = "NO"

def decToHex(n):
	s = ""
	while n>=1:
		r = n%16
		if r==10: s += "A"
		elif r==11: s += "B"
		elif r==12: s += "C"
		elif r==13: s += "D"
		elif r==14: s += "E"
		elif r==15: s += "F"
		else: s += str(r)
		n //= 16
	s += 'x0'
	return s[::-1]

def hexToDec(s):
	res = 0
	b = len(s)-3
	for i in range (2, len(s)):
		r = s[i]
		if r=='A': r = 10
		elif r=='B': r = 11
		elif r=='C': r = 12
		elif r=='D': r = 13
		elif r=='E': r = 14
		elif r=='F': r = 15
		else: r = int(r)
		res += r*(16**b)
		b -= 1
	return res

def solve(tc):
	# solve the problem here
	if len(tc)>2 and tc[1]=='x':
		print(hexToDec(tc))
	else:
		print(decToHex(int(tc)))

try:
	while True:
		n = input()
		if n[0]=='-': break
		solve(n)

except EOFError:
	pass


sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

