#include <stdio.h>

void balancedSums(int n, int arr[n]){
    int ls = 0, rs = 0, sum = 0;
    for(int i=0; i<n; i++) sum+=arr[i];
    for(int j=0; j<n; j++){
        rs = sum - ls - arr[j];
        if(ls == rs){
            printf("YES\n");
            return;
        }
        ls+=arr[j];
    }
    printf("NO\n");
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++) scanf("%d ", &arr[i]);
        balancedSums(n, arr);
    }
    return 0;
}