// This is the solution to the codechef problem Football.
// Simple arithimetic operation + concept of finding max.

#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int b[n];
        int temp=0;
        int max=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        
        
        for(int i=0;i<n;i++){
            temp=arr[i]*20-b[i]*10;
            if(temp>max){
                max=temp;// Store the maximum value
            }
        }
        printf("%d\n",max);
    }
}