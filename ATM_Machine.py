# Solution to the CodeChef Problem ATM Machine
t=int(input())

for i in range(t):
    array=list(map(int,input().split()))
    string=''
    
    arr=list(map(int,input().split()))
    
    for i in range(array[0]):
        if arr[i]<=array[1]:
            array[1]=array[1]-arr[i]
            string=string+'1'
            
        else:
            string=string+'0'
            
    print(string)
            
    
    
    
