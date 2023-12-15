#include <stdio.h>
#include <string.h>

int main() {
    char answer[20];  // Assuming the answer won't exceed 20 characters
    int attempts = 0;
    
    // Loop until the user enters the correct answer or exhausts three attempts
    while (attempts < 3) {
        // Prompt the user for input
        printf("Who is the president of Russia? ");
        scanf("%s", answer);

        // Check if the answer is correct
        if (strcmp(answer, "Vladimir") == 0 || strcmp(answer, "Putin") == 0) {
            printf("You answered correctly.\n");
            return 0;  // Terminate the program
        } else {
            // Incorrect answer, increment the attempts counter
            attempts++;
            printf("Incorrect answer, try again.\n");
        }
    }

    // If three incorrect attempts, display the correct answer and terminate
    printf("The answer is Vladimir Putin.\n");

    return 0;
}
