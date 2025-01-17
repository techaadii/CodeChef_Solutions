# This is the solution to the CodeChef Problem Covid and Theatre Tickets

"""Solution Approach:
We will consider the number of seats that can be occupied in a row
Then we will consider the number of rows that can possibly be occupied
Then multiply them to get the total no. of seats"""

t=int(input())

for i in range(t):
    arr=list(map(int,input().split()))
    
    if arr[1]%2==0:
        rows=arr[1]//2
    else:
        rows=(arr[1]+1)//2
        
    if arr[0]%2==0:
        columns=arr[0]//2
    else:
        columns=(arr[0]+1)//2
        
    
    total=rows*columns
    print("%d" %total)
    