#include <stdio.h>

int main() {

    int i, j;
    int lower_t3, upper_t3, sum;
    int limit_t4, limit_t5, limit_t6;
    int limit_t9, rect_length, rect_width;
    int n;

    printf("---- Task 1 ----\n");
    i = -15;
    while (i <= 5) {
        printf("%d", i);
        if (i < 5) printf(", ");
        i++;
    }
    printf("\n\n");

    printf("---- Task 2 ----\n");
    i = -15;
    while (i <= 5) {
        if (i % 2 != 0) {
            printf("%d", i);
            if (i < 5) printf(", ");
        }
        i++;
    }
    printf("\n\n");

    printf("---- Task 3 ----\n");
    printf("Enter [a,b]: ");
    scanf("%d %d", &lower_t3, &upper_t3);
    sum = 0;
    i = lower_t3;
    while (i <= upper_t3) {
        sum += i;
        i++;
    }
    printf("Result: %d\n\n", sum);

    printf("---- Task 4 ----\n");
    printf("Enter sequence limit: ");
    scanf("%d", &limit_t4);
    i = 1;
    j = 1;
    while (j <= limit_t4) {
        if (i % 3 == 1)
            printf("%d", i);
        else
            printf("%d", -i);

        if (j < limit_t4) printf(", ");
        i++;
        j++;
    }
    printf("\n\n");

    printf("---- Task 5 ----\n");
    printf("Enter sequence limit: ");
    scanf("%d", &limit_t5);
    i = 1;
    j = 1;
    while (j <= limit_t5) {
        printf("%d, 0", (j % 2 == 1) ? i : -i);
        if (j < limit_t5) printf(", ");
        i++;
        j++;
    }
    printf("\n\n");

    printf("---- Task 6 ----\n");
    printf("Enter sequence limit: ");
    scanf("%d", &limit_t6);
    i = 1;
    j = 1;
    while (j <= limit_t6) {
        printf("%d", (j % 2 == 1) ? i * 10 : -i * 10);
        if (j < limit_t6) printf(", ");
        i++;
        j++;
    }
    printf("\n\n");

    printf("---- Task 7 ----\n");
    sum = 0;
    i = 1;
    while (i <= 10) {
        sum += i * i;
        i++;
    }
    printf("Average: %.2f\n\n", sum / 10.0);

    printf("---- Task 8 ----\n");
    int a = 0, b = 1, c;
    printf("%d, %d", a, b);
    i = 3;
    while (i <= 10) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
        i++;
    }
    printf("\n\n");

    printf("---- Task 9 ----\n");
    printf("Please enter the length of the square: ");
    scanf("%d", &limit_t9);
    i = 0;
    while (i < limit_t9) {
        j = 0;
        while (j < limit_t9) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");

    printf("---- Task 10 ----\n");
    printf("Please enter the length of the rectangle: ");
    scanf("%d", &rect_length);
    printf("Please enter the width of the rectangle: ");
    scanf("%d", &rect_width);
    i = 0;
    while (i < rect_length) {
        j = 0;
        while (j < rect_width) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");

    printf("---- Task 11 ----\n");
    i = 1;
    while (i <= 10) {
        j = 1;
        while (j <= 10) {
            printf("%4d", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");

    printf("---- Task 12 ----\n");
    printf("Enter n: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        j = 1;
        while (j <= n) {
            printf("%4d", i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}