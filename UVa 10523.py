try:
    while True:
        n, a = map(int, input().split())
        sum = 0
        for i in range(1, n+1):
            sum += (i*(a**i))
        print(sum)
        
except EOFError: 
    pass 
