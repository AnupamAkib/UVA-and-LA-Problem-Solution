try:
    while True:
        n = int(input())
        f = 1
        for i in range (1, n+1):
            f *= i
        print(f"{n}!")
        print(f)
except EOFError: 
    pass 
