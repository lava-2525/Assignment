#include <stdio.h>
#include <string.h>

int main() {
    char s[21];
    scanf("%s", s);

    int z = 0, o = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'z')
            z++;
        else if (s[i] == 'o')
            o++;
    }

    if (2 * z == o)
        printf("Yes");
    else
        printf("No");

    return 0;
}
