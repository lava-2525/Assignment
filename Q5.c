#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x : ");
    scanf("%d",&x);

    printf("Enter y : ");
    scanf("%d",&y);

    // axis check first (fast exit)
    if(x == 0 && y == 0)
        printf("Origin (0,0)\n");

    else if(x == 0)
        printf("On Y axis\n");

    else if(y == 0)
        printf("On X axis\n");

    // now quadrant check less conditions
    else {
        if(x > 0 && y > 0)      printf("1st Quadrant\n");
        else if(x < 0 && y > 0) printf("2nd Quadrant\n");
        else if(x < 0 && y < 0) printf("3rd Quadrant\n");
        else                    printf("4th Quadrant\n");  
    }

    return 0;
}
