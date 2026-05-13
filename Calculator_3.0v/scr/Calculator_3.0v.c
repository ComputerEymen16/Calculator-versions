#include <stdio.h>

int main() {
    float number1, number2;
    char op;
    char vote;

    printf("Calculator 3.0v by Computer Eymen\n");

    do {
        // Input validation for the first number
        printf("Enter the first number: ");
        while (scanf(" %f", &number1) != 1) {
            printf("Invalid input. Please enter a valid number: ");
            while (getchar() != '\n'); // Clear the input buffer
        }

        // Input validation for the second number
        printf("Enter the Second number: ");
        while (scanf(" %f", &number2) != 1) {
            printf("Invalid input. Please enter a valid number: ");
            while (getchar() != '\n'); // Clear the input buffer
        }

        // Get the operator from the user
        printf("Enter the operator(+, -, x, :, %%): ");
        scanf(" %c", &op);

        // Perform calculation based on the chosen operator
        switch (op) {
            case '+':
                printf("Result: %.2f\n", number1 + number2);
                break;
            case '-':
                printf("Result: %.2f\n", number1 - number2);
                break;
            case 'x':
                printf("Result: %.2f\n", number1 * number2);
                break;
            case ':':
                // Check for division by zero
                if (number2 != 0)
                    printf("Result: %.2f\n", number1 / number2);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            case '%':
                // Modulo operation requires integer conversion
                if ((int)number2 != 0)
                    printf("Result: %d\n", (int)number1 % (int)number2);
                else
                    printf("Error: Modulo by zero is not allowed.\n");
                break;
            default:
                printf("Error: Invalid operator.\n");
                break;
        }

        // Ask the user if they want to continue
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &vote);

    } while (vote == 'y' || vote == 'Y'); // Repeat loop if answer is 'y' or 'Y'

    // Final message and wait for user to press enter before closing
    printf("Press Enter to close.");
    getchar();
    getchar();

    return 0;
}
