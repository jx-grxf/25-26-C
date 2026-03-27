#include <stdio.h>
#include <stdlib.h>

int main()
{

    int points = 0;

    printf("===TEST RESULTS=== \n");

    printf("Please enter the reached points: \n");
    scanf("%d", &points);

    if (points < 0 || points > 48)
    {
        printf("ERROR! Incorrect point range. Try again");
        return 1;
    }

    printf("A score of %d points result in grade ", points);

    if (points <= 24)
    {
        printf("fail");
    }
    else if (points <= 31)
    {
        printf("pass");
    }
    else if (points <= 38)
    {
        printf("average");
    }
    else if (points <= 44)
    {
        printf("good");
    }
    else
    {
        printf("very good");
    }

    return 0;
}

