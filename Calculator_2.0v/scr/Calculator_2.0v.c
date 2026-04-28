#include <stdio.h>
int main() {
	//Varible declarations: float for numbers, char for characters
	float number1, number2;
	char op;
	char vote;
	//Main loop that will run until the user wants to exit
	do {
		printf("Calculator 2.0v by Computer Eymen\n");

		//Getting bumbers from the user
		printf("Please Enter the first number: ");
		scanf(" %f", &number1);

		printf("Please Enter the second number: ");
		scanf(" %f", &number2);

		//Selecting the operation operator
		printf("Please Enter the sign of the operation you want to perform (+,-,x,:): ");
		scanf(" %c", &op);
		//Checking mathematical operations and printing results
		if (op == '+') {
			printf("Result: %.2f", number1 + number2);
		}

		if (op == '-') {
			printf("Result: %.2f", number1 - number2);
		}

		if (op == 'x') {
			printf("Result: %.2f", number1 * number2);
		}

		if (op == ':') {
			// Note: An if check can be added here later for division by zero errors
			printf("Result: %.2f", number1 / number2);
		}
		// Buffer clearing and retry query
		getchar();

		printf("\nWould you like to perform another operation? Y/N: ");
		scanf(" %c", &vote);

	} while (vote == 'y' || vote == 'Y'); // Return to the beginning as long as the user says 'Y' or 'y'

	// Exit screen
	printf("Calculator 2.0v by Computer Eymen\n");
	printf("Press Enter to close");

	// Wait to prevent the console from closing immediately
	getchar();
	getchar();

	return 0;
}