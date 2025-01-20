# cook your dish here

# Idea: if the count of any element exceeds 2 then we can'st split the array into 2.
t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    arr=sorted(arr)
    output=[]
    count=0
    mount=0
    for i in range(2*n):
        for j in range(2*n):
            if arr[i]==arr[j]:
                count=count+1;
                
        output.append(count)
        count=0
        
    
        
    
    
    for i in range(len(output)):
        if output[i]!=1 and output[i]!=2:
            print("No")
            mount=1
            break
            
    if mount!=1:
        print("Yes")
    mount=0
   
    
