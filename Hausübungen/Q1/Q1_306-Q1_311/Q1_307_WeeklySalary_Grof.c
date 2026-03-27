#include <stdio.h>
#include <math.h>

int main() {

    int hourlyRate = 0;
    int extraHours = 0;
    int salary = 0;

    printf("Please enter the hourly rate in euros: ");
    scanf("%d", &hourlyRate);

    printf("Please enter the extra hours worked: ");
    scanf("%d", &extraHours);

    salary = 40 * hourlyRate + extraHours * hourlyRate * 2;

    printf("Your salary is %d.- EUR", salary);

    return 0;
    
}