#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        int count=0;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                count++;
            }
        }
        if(count%2==0&&count>1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

}

