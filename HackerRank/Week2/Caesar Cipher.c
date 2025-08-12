#include <stdio.h>
#include <ctype.h>

void caesarCipher(char str[], int n, int k){
    k=k%26;
    for(int i=0; i<n; i++){
        if (islower(str[i])) {
            str[i] = 'a' + (str[i] - 'a' + k) % 26;
        }
        else if (isupper(str[i])) {
            str[i] = 'A' + (str[i] - 'A' + k) % 26;
        }
    }
    printf("%s", str);
}

int main(){
    int n, k;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    scanf("%d", &k);
    
    caesarCipher(s, n, k);
    return 0;
}