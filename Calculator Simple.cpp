#include <iostream>
#include <string>

void main() {
	std::cout << "Welcome to Simple Calulator" << std::endl;
	int Answer = 0;
	std::cout << "Type a number";
	int firstNumber = 0;
	std::cout << std::endl;
	std::cin >> firstNumber;
	std::cout << std::endl;
	std::cout << "Do you want to add, subtract, multiply, or divide?";
	std::cout << std::endl;
	std::string symbol = "";
	std::cin >> symbol;
	std::cout << std::endl;
	if (symbol != "-" && symbol != "+" && symbol != "/" && symbol != "*") {
		std::cout << "!!INCORRECT SYMBOL PLEASE TRY AGAIN!!";
		std::cout << std::endl;
		std::cin >> symbol;
	}
	std::cout << "Type the second number" << std::endl;
	int secondNumber = 0;
	std::cin >> secondNumber;

	if (symbol == "-") {
		Answer = firstNumber - secondNumber;
		std::cout << "Your Answer is:" << Answer;
		std::cout << std::endl;
	}
	if (symbol == "+") {
		Answer = firstNumber + secondNumber;
		std::cout << "Your Answer is:" << Answer;
		std::cout << std::endl;
	}
	if (symbol == "/") {
		Answer = firstNumber / secondNumber;
		std::cout << "Your Answer is:" << Answer;
		std::cout << std::endl;
	}
	if (symbol == "*") {
		Answer = firstNumber * secondNumber;
		std::cout << "Your Answer is:" << Answer;
		std::cout << std::endl;
	}
}

