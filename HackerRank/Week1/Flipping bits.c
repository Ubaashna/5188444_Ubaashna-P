#include <stdio.h>
#include <stdint.h>

uint32_t flippingBits(int n){
    return ~n;
}

int main(){
    int q,i;
    scanf("%d", &q);
    int n[q];
    for(i=0;i<q;i++){
        scanf("%d", &n[i]);
    }
    for(i=0;i<q;i++){
        printf("%u\n", flippingBits(n[i]));   
    }
    
    return 0;
}