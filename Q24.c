#include <stdio.h>

int main() {
    char S[1000];
    scanf("%s", S);

    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] = S[i] + 32;  // Convert to lowercase
        } else if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] = S[i] - 32;  // Convert to uppercase
        }
    }

    printf("%s\n", S);
    return 0;
}
