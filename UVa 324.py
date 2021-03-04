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
	cnt = [0]*10
	f = str(math.factorial(tc))
	for i in f:
		cnt[int(i)] += 1
	print(f"{tc}! --")
	print(f"   (0) {str(cnt[0]).rjust(4, ' ')}    (1) {str(cnt[1]).rjust(4, ' ')}    (2) {str(cnt[2]).rjust(4, ' ')}    (3) {str(cnt[3]).rjust(4, ' ')}    (4) {str(cnt[4]).rjust(4, ' ')}")
	print(f"   (5) {str(cnt[5]).rjust(4, ' ')}    (6) {str(cnt[6]).rjust(4, ' ')}    (7) {str(cnt[7]).rjust(4, ' ')}    (8) {str(cnt[8]).rjust(4, ' ')}    (9) {str(cnt[9]).rjust(4, ' ')}")


try:
	while True:
		tt = int(input())
		if tt==0:
			break
		solve(tt)

except EOFError:
	pass

sys.stderr.write("**Time -> %.15f fs\n" % (time.time() - start_time))

