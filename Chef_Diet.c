// This file contians the solution to the codechef problem named Chef Diet.
// Do look at the solution and contribute if you think there is a better way of doing the problem.

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int temp=0;
	    int mount=0;
	    int n;
	    int k;
	    scanf("%d%d",&n,&k);
	    int arr[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]+temp<k){
	            printf("NO %d\n",i+1);
	            mount=1;
	            break;
	        }
	        else{
	            temp=temp+arr[i]-k;
	        }
	    }
	    if(mount==0){
	        printf("YES\n");
	    }
	    
	    
	    
	}

}

