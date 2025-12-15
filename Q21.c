#include <stdio.h>

int main() {
    int L, N;
    scanf("%d", &L);
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int W, H;
        scanf("%d %d", &W, &H);

        if (W < L || H < L) {
            printf("UPLOAD ANOTHER\n");
        } 
        else if (W == H) {
            printf("ACCEPTED\n");
        } 
        else {
            printf("CROP IT\n");
        }
    }

    return 0;
}
