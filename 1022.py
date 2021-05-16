#Imtiaz Adar
#TDA Rational - 1022
res,res1=0,0
while True:
    try:
        def mod(val,val2):
            if val<0:
                val=-val
            if val2<0:
                val2=-val2
            elif val%val2==0:
                return val2
            else:
                return mod(val2,val%val2)
        x=int(input())
        for i in range(x):
            n1,ch1,d1,ch2,n2,ch3,d2=map(str,input().split(' '))
            n1=int(n1)
            d1=int(d1)
            n2=int(n2)
            d2=int(d2)
            if ch2=='+':
                res=(n1*d2)+(n2*d1)
                res1=(d1*d2)
            elif ch2=='-':
                res=(n1*d2)-(n2*d1)
                res1=d1*d2
            elif ch2=='*':
                res=n1*n2
                res1=d1*d2
            elif ch2=='/':
                res=n1*d2
                res1=n2*d1
            answer=int((mod(res,res1)))
            print(f'{res}/{res1} = {res//answer}/{res1//answer}')
    except EOFError:
        break