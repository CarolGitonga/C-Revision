#include <stdio.h> 

int main() { 

    // Step 1: Input 

    int subject1, subject2, subject3, subject4; 

    printf("Enter marks for subject 1: "); 

    scanf("%d", &subject1); 

    printf("Enter marks for subject 2: "); 

    scanf("%d", &subject2); 

    printf("Enter marks for subject 3: "); 

    scanf("%d", &subject3); 

    printf("Enter marks for subject 4: "); 

    scanf("%d", &subject4); 

    // Step 2: Compute Total Marks 

    int total_marks = subject1 + subject2 + subject3 + subject4; 

    // Step 3: Compute Average 

    float average = (float)total_marks / 4;  // Using float for accurate average calculation 

    // Step 4: Compute Grade 

    char grade; 

    if (average >= 70 && average <= 100) { 

        grade = 'A'; 

    } else if (average >= 60 && average <= 69) { 

        grade = 'B'; 

    } else if (average >= 50 && average <= 59) { 

        grade = 'C'; 

    } else if (average >= 40 && average <= 49) { 

        grade = 'D'; 

    } else { 

        grade = 'F'; 

    } 

    // Step 5: Output 

    printf("Total Marks: %d\n", total_marks); 

    printf("Average: %.2f\n", average); 

    printf("Grade: %c\n", grade); 

    return 0; 

} 