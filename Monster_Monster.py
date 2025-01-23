# Solution to this question is done by splitting the problem into 2 cases.
# Firstly when the increment of HP for monster is greater than the monster having the initilaly  the largest XP 
# Secondly we increament all of them and then take the max as required. 

t=int(input())

for i in range(t):
    b=list(map(int,input().split()))
    arr=list(map(int,input().split()))
    n=b[0]
    x=b[1]
    mount=0
    
    arr=sorted(arr)
    if x>=arr[n-1]:
        output=(n-1)*x+arr[0]
        print(output)
    else:
        for i in range(0,n):
            arr[i]=(n-1-i)*x+arr[i]
            
        arr=sorted(arr)
        print(arr[n-1])
