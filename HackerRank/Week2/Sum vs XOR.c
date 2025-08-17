#include <stdio.h>

unsigned long long sumXor(unsigned long long n){
    int zeros = 0;
    while(n){
        if((n&1)==0) zeros++;
        n>>=1;
    }
    return (1ULL << zeros);
}

int main(){
    unsigned long long n;
    scanf("%llu", &n);
    printf("%llu", sumXor(n));
}
