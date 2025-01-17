// This is the solution to the CodeChef Problem Hostel Room 

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x;
	    scanf("%d%d",&n,&x);
	    int arr[n];
	    
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }
	    int temp=x;
	    int mount=x;
	    for(int i=0;i<n;i++){ // We are assigning 2 variables mount and temp.
        //One variable holds the maximum value while the other holds the traversal.
	        temp=temp+arr[i];
	        if(temp>mount){
	            mount=temp;
	        }
	    }
	    
	    printf("%d\n",mount);
	    temp=0;
	    
	}
	

}

