#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int count=1;
        int mount=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            
        }
        for(int i=0;i<n;i++){
            count=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(count>mount){
                mount=count;
                count=0;
            }
        }
        printf("%d\n",n-mount);
    }

}

