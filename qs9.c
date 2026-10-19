#include <stdio.h>

int main() {
    int numDepartments, numEmployees, days;
    int deptTotal, grandTotal = 0;

    // 1. Ask for number of departments
    printf("Enter the number of departments: ");
    scanf("%d", &numDepartments);

    // 2. Outer loop for departments
    for (int i = 1; i <= numDepartments; i++) {
        deptTotal = 0; // Reset department total for each new department

        // 3. Ask for number of employees in the current department
        printf("\nEnter the number of employees in Department %d: \n", i);
        scanf("%d", &numEmployees);

        // 4. Inner loop for employees
        for (int j = 1; j <= numEmployees; j++) {
            // 5. Ask for days worked and calculate salary
            printf("Enter days worked for Employee %d: ", j);
            scanf("%d", &days);

            int salary = days * 500;
            if (days > 25) {
                salary += 2000; // Add bonus if worked more than 25 days
            }

            // Display salary slip in the required format
            printf("Department %d, Employee %d: Days Worked = %d, Salary = Rs. %d\n", i, j, days, salary);
            
            deptTotal += salary;
        }

        // 6. Print a blank line and the total salary for this department
        printf("\nTotal salary paid in Department %d: Rs. %d\n", i, deptTotal);
        
        grandTotal += deptTotal; // Add to grand total
    }

    // At the very end, display the total salary across all departments combined
    printf("\nTotal salary paid across all departments combined: Rs. %d\n", grandTotal);

    return 0;
}