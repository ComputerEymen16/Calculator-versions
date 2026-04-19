#include <iostream>
int main() {
	float number1, number2;
	char operation;
	std::cout << " Calculator 1.0v by Computer Eymen\n";
	std::cout << "Enter first number: ";
	std::cin >> number1;
	std::cout << "Enter second number: ";
	std::cin >> number2;
	std::cout << "Enter operation (+, -, *, /): ";
	std::cin >> operation;

	if (operation == '+') {
		std::cout << "Result: " << number1 + number2;
	}

	if (operation == '-') {
		std::cout << "Result: " << number1 - number2;
	}

	if (operation == '*') {
		std::cout << "Result: " << number1 * number2;
	}

	if (operation == '/') {
		std::cout << "Result: " << number1 / number2;
	}

	getchar(); // Wait for user input before closing the console
	std::cout << "\nCalculator 1.0v by Computer Eymen\n";
    std::cout << "Press Enter to close...";
	getchar();
	return 0;
}