#include <stdio.h>
int main()
{
    printf("Enter the score of  the student: ");
    int score;
    scanf("%d", &score);
    char grade = 'o';

    if (score >= 90 && score <= 100)
    {
        grade = 'A';
    }
    else if (score >= 80 && score < 90)
    {
        grade = 'B';
    }
    else if (score >= 70 && score < 80)
    {
        grade = 'C';
    }
    else if (score >= 60 && score < 70)
    {
        grade = 'C';
    }
    else
    {
        grade = 'F';
    }

    printf("The grade of the student is : %c", grade);
    return 0;
}