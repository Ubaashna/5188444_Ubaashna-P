#include <stdio.h>

unsigned long highestPower(unsigned long n){
    n |= (n>>1);
    n |= (n>>2);
    n |= (n>>4);
    n |= (n>>8);
    n |= (n>>16);
    n |= (n>>32);
    return n - (n>>1);
}

void counterGame(unsigned long n){
    int turns =0;
    while(n!=1){
        if((n&(n-1))==0){
            n >>= 1;
        }
        else{
            unsigned long hp = highestPower(n);
            n -= hp;
        }
        turns++;
    }
    if(turns%2==0) printf("Richard\n");
    else printf("Louise\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        unsigned long n;
        scanf("%lu", &n);
        counterGame(n);
    }

    return 0;
}