#include <stdio.h>

int main()
{
    int marks; // Declaration

    scanf("%d", &marks); // Input

    printf("\n************\n");

    if (marks < 50) // Conditions
    {
        printf("Grade is F\n");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Grade is D\n");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Grade is C\n");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Grade is B\n");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Grade is A\n");
    }
    else if (marks >= 90)
    {
        printf("Grade is A+\n"); // Conditions
    }

    printf("************\n"); // Extra
    printf("Coded By Maruf\n\n");

    return 0;
}