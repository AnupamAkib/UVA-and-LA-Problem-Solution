import math
try:
    while True:
        n = int(input())
        m = str(math.factorial(n)); ans = 0
        for i in range (0, len(m)):
            ans += int(m[i])
        print(ans)
        
except EOFError: 
    pass 
