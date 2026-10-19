#include <stdio.h>

int main() {
    int numClasses, numStudents, numSubjects;
    
    // Global accumulators for the entire school
    float globalAvgSum = 0;
    int totalStudentsGlobal = 0;
    float schoolTotalMarks = 0;

    // 1. Ask for the number of classes in the school
    printf("Enter the number of classes in the school: ");
    scanf("%d", &numClasses);

    // 2. Outer loop: represents each class
    for (int c = 1; c <= numClasses; c++) {
        float classTotalMarks = 0;
        float classAvgSum = 0;

        // 3. Ask for the number of students in the current class
        printf("\nEnter the number of students in Class %d: \n", c);
        scanf("%d", &numStudents);

        // 4. Middle loop: represents each student in the current class
        for (int s = 1; s <= numStudents; s++) {
            int studentTotal = 0;
            int isPassed = 1; // Assume student passed unless a subject is below 40

            // 5. Ask for the number of subjects studied by the student
            printf("  Enter the number of subjects for Student %d: ", s);
            scanf("%d", &numSubjects);

            // 6. Inner loop: represents each subject
            for (int sub = 1; sub <= numSubjects; sub++) {
                int marks;
                printf("    Enter marks obtained in Subject %d: ", sub);
                scanf("%d", &marks);

                // Add marks to running total for the current student
                studentTotal += marks;

                // Check if marks are less than 40
                if (marks < 40) {
                    isPassed = 0; // Mark student as failed
                }
            }

            // Calculate average marks for the student
            float studentAvg = (float)studentTotal / numSubjects;

            // Display individual student result in the exact requested format
            if (isPassed) {
                printf("  -> Class %d, Student %d: Total Marks = %d, Average = %.2f, Result = Pass\n", 
                       c, s, studentTotal, studentAvg);
            } else {
                printf("  -> Class %d, Student %d: Total Marks = %d, Average = %.2f, Result = Fail\n", 
                       c, s, studentTotal, studentAvg);
            }

            // Accumulate for class metrics
            classTotalMarks += studentTotal;
            classAvgSum += studentAvg;
        }

        // 7. After middle loop finishes, calculate class average and print details
        float classAverage = classAvgSum / numStudents;
        
        printf("\nTotal marks of all students in Class %d: %.2f\n", c, classTotalMarks);
        printf("Class %d Average: %.2f\n", c, classAverage);
        printf("--------------------------------------------------\n");

        // Accumulate for school-wide metrics
        schoolTotalMarks += classTotalMarks;
        globalAvgSum += classAvgSum;
        totalStudentsGlobal += numStudents;
    }

    // At the very end, display overall school results
    float overallSchoolAverage = globalAvgSum / totalStudentsGlobal;

    printf("\n==================================================\n");
    printf(" SCHOOL SUMMARY:\n");
    printf(" Total marks of all students across all classes: %.2f\n", schoolTotalMarks);
    printf(" Overall school average: %.2f\n", overallSchoolAverage);
    printf("==================================================\n");

    return 0;
}