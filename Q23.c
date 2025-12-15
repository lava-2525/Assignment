#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int greenCost, purpleCost;
        scanf("%d %d", &greenCost, &purpleCost);

        int N;
        scanf("%d", &N);

        int problem1 = 0, problem2 = 0;

        for (int i = 0; i < N; i++) {
            int p1, p2;
            scanf("%d %d", &p1, &p2);

            problem1 += p1;
            problem2 += p2;
        }

        int costOption1 = problem1 * greenCost + problem2 * purpleCost;
        int costOption2 = problem1 * purpleCost + problem2 * greenCost;

        int minCost = costOption1 < costOption2 ? costOption1 : costOption2;
        printf("%d\n", minCost);
    }

    return 0;
}
