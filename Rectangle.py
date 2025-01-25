# Solution to the CodeChef Problem Rectangle

# Sort the array of size 4. If they form a rectangle the first 2 elements will be equal and the last 2 elements will be equa.


t=int(input())
for i in range(t):
    arr=list(map(int,input().split()))
    count=0;
    
    arr=sorted(arr)
    if arr[0]==arr[1]:
        count=count+1
    if arr[2]==arr[3]:
        count=count+1
        
    if count==2:
        print("Yes")
        
    else:
        print("No")
    count=0
    
