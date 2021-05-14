res=0
while True:
    try:
        x,y=list(map(int,input().split()))
        res=x*y*2
        print(res)
    except EOFError:
        break