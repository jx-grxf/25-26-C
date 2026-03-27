#include <stdio.h>

int main() {

    int n = 5;
    float x = 1.234567;
    double y = 1.234567;
    char c = 'A';
    char str[30] = "Hello";

    printf("int (right-aligned, width 8):                       %8d\n", n);
    printf("int (left-aligned, width 8):                        %-8d\n", n);
    printf("int (right-aligned with leading zeros, width 8):    %08d\n", n);
    printf("int (left aligned with sign, width 8):              %-+8d\n", n);

    printf("float (width 10, 4 decimals):                       %10.4f\n", x);
    printf("float (width 10, 2 decimals, left):                 %-10.2f\n", x);
    printf("float (width 10, 3 decimals):                       %10.3f\n", x);
    printf("float (width 10, 3 decimals, 0+):                   %+010.3f\n\n", x);

    printf("double (width 10, 4 decimals):                      %10.4lf\n", y);
    printf("double (width 2, 4 decimals):                       %2.4lf\n", y);
    printf("double (width 15, 8 decimals):                      %15.8lf\n", y);
    printf("double (width 10, 2 decimals, left):                %-10.2lf\n", y);
    printf("double (width 10, 3 decimals, 0):                   %010.3lf\n\n", y);

    printf("char (width 3, right-aligned):                      %3c\n", c);
    printf("char (width 3, left-aligned):                       %-3c\n\n", c);

    printf("string (width 10, right-aligned):                   %10s\n", str);
    printf("string (width 3, right-aligned):                    %3s\n", str);
    printf("string (width 10, left-aligned):                    %-10s\n", str);



    return 0;


 
}



   