#include <stdio.h>
#include <math.h>

void solveQuadratic(int a, int b, int c) {
    double D;
    double x1, x2;

    D = b * b - 4 * a * c; 

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2.0 * a);
        x2 = (-b - sqrt(D)) / (2.0 * a);
        printf("異なる2つの実数解を持つ\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if (D == 0) {
        x1 = -b / (2.0 * a);
        printf("重解を持つ\n");
        printf("x = %.2f\n", x1);
    }
    else {
        printf("実数解を持たない\n");
    }
}

int main(void) {
    int a, b, c;

    do {
        printf("a を入力してください（0以外）: ");
        scanf("%d", &a);
        if (a == 0) {
            printf("a は 0 以外を入力してください\n");
        }
    } while (a == 0);

    printf("b を入力してください: ");
    scanf("%d", &b);

    printf("c を入力してください: ");
    scanf("%d", &c);

    solveQuadratic(a, b, c);

    return 0;
}
