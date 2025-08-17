#include <stdio.h>

long long superDigit(long long n) {
    if (n < 10) return n;
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return superDigit(sum);
}

int main() {
    char n[100001];
    int k;
    scanf("%s %d", n, &k);

    long long s = 0;
    for (int i = 0; n[i]; i++) {
        s += n[i] - '0';
    }
    s *= k;
    printf("%lld\n", superDigit(s));
    return 0;
}