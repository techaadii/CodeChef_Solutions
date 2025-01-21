// Considering the input size, dont forget to initialize long int to make sure you dont get stuck in the signed integer problem.

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    long int n;
	    scanf("%ld",&n);
	    long int even=0;
	    long int odd=0;
	    long int output=0;
	    if(n%2==0){
	       even=n/2;
	       odd=n/2;
	       
	    }
	    else{
	        odd=(n/2)+1;
	        even=n/2;
	    }
	    output=2*even*odd;
	    printf("%ld\n",output);
	}

}

