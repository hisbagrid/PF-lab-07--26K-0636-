
#include <stdio.h>

int main()
{
    int marks[2][3][3];
    int total[2][3] = {0};
    int class, student, subject;
    int topper, overallClass = 0, overallStudent = 0;

    // Taking input for marks
    for (class = 0; class < 2; class++)
    {
        for (student = 0; student < 3; student++)
        {
            printf("Enter marks for Class %d, Student %d:\n",
                   class + 1, student + 1);

            for (subject = 0; subject < 3; subject++)
            {
                printf("Subject %d: ", subject + 1);
                scanf("%d", &marks[class][student][subject]);
            }
        }
    }

    // Calculating total marks of each student
    for (class = 0; class < 2; class++)
    {
        for (student = 0; student < 3; student++)
        {
            for (subject = 0; subject < 3; subject++)
            {
                total[class][student] +=
                    marks[class][student][subject];
            }

            printf("Class %d, Student %d: Total = %d\n",
                   class + 1, student + 1,
                   total[class][student]);
        }
    }

    // Finding topper of each class
    for (class = 0; class < 2; class++)
    {
        topper = 0;

        for (student = 1; student < 3; student++)
        {
            if (total[class][student] > total[class][topper])
            {
                topper = student;
            }
        }

        printf("Top Performer of Class %d: Student %d with %d marks\n",
               class + 1, topper + 1, total[class][topper]);
    }

    // Finding overall topper
    for (class = 0; class < 2; class++)
    {
        for (student = 0; student < 3; student++)
        {
            if (total[class][student] >
                total[overallClass][overallStudent])
            {
                overallClass = class;
                overallStudent = student;
            }
        }
    }

    printf("Overall Topper: Class %d, Student %d with %d marks\n",
           overallClass + 1, overallStudent + 1,
           total[overallClass][overallStudent]);

    return 0;
}
