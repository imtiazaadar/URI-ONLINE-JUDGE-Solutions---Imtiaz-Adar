#URI - Above The Average 1214
# Imtiaz Adar

#percentage of students whose grade is above average, rounded to 3 decimal places.

while True:
    try:
        x=int(input()) #size
        sum=0
        above=0
        arr=[]
        media=0
        for i in range(x):
            y=input().split() #took input of the whole line as a string
            val=int(y.pop(0)) #then poped the first value as the size of that string and stored into 'val'
            for j in y:
                sum+=int(j) #sum
                arr.append(j) #appended to list
            media=float(sum/val) #calculated average
            for k in range(val):
                if int(arr[k])>media:
                    above+=1 #counting by 1 if any element is greater than the average value
            print(f'{((above*100.0)/val):.3f}%')
            above,sum=0,0
            arr=[]
    except EOFError:
        break
