# Simple question where we check the possibity of all the cases that can be taken as a luggage or check in

t=int(input())

for i in range(t):
    arr=list(map(int,input().split()))
    
    b=[]
    b.append(arr[0])
    b.append(arr[1])
    b.append(arr[2])
    
    b=sorted(b)
    
    if b[1]+b[2]<=arr[3]:
        if b[0]<=arr[4]:
            print("Yes")
        else:
            print("No")
        
    elif b[0]+b[2]<=arr[3]:
        if b[1]<=arr[4]:
            print("Yes")
            
        else:
            print("No")
            
    elif b[1]+b[0]<=arr[3]:
        if b[2]<=arr[4]:
            print("Yes")
            
        else:
            print("No")
            
    else:
        print("No")