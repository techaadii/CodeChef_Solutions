// This is the solution to the codechef problem Hungry Ashish.
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int arr[3];
        for(int i=0;i<3;i++){
             scanf("%d",&arr[i]);
        }
        if(arr[0]>=arr[1]){ // This construct here deals with the case of priority of ashish by choosing pizza over burger.
            printf("Pizza\n");
        }
        else if(arr[0]<arr[1] && arr[0]>=arr[2]){ // Deals with the case when the money is less to buy a pizza but can buy burger.
            printf("Burger\n");
        }
        else if(arr[0]<arr[1] && arr[0]<arr[2]){// Case where the money ashish have is less than the required to buy any of the pizza or burger.
            printf("Nothing\n");
        }
    }

}

