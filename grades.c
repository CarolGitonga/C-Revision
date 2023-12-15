#include <stdio.h> 

int main() { 

    // Step 2: Prompt the user to enter math marks 

    printf("Enter math marks: "); 

    int mathMarks; 

    scanf("%d", &mathMarks); 

    // Step 3: Prompt the user to enter physics marks 

    printf("Enter physics marks: "); 

    int physicsMarks; 

    scanf("%d", &physicsMarks); 

    // Step 4: Prompt the user to enter chemistry marks 

    printf("Enter chemistry marks: "); 

    int chemistryMarks; 

    scanf("%d", &chemistryMarks); 

    // Step 5: Calculate the mean score of the subjects 

    float meanScore = (mathMarks + physicsMarks + chemistryMarks) / 3.0; 

    // Step 6: Check qualification criteria 

    if (mathMarks >= 80 && physicsMarks >= 75 && chemistryMarks >= 70 && meanScore >= 80) { 

        // 6.1: Print "Qualified for Engineering Program" 

        printf("Qualified for Engineering Program\n"); 

    } else { 

        // 6.2: Print "Not Qualified for Engineering Program" 

        printf("Not Qualified for Engineering Program\n"); 

    } 

    // Step 7: End 

    return 0; 

} 