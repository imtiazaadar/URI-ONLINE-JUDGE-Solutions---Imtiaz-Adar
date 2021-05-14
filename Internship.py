#Imtiaz Adar #Internship
while True:
    try:
        x=int(input())
        sum=0
        sum1=0
        res=0
        for i in range (x):
            n,c=list(map(int,input().split()))
            sum+=(n*c)
            sum1+=c
        res=float(sum/(sum1*100.0))
        print(f'{res:.4f}')
        sum,sum1=0,0
    except EOFError:
        break
