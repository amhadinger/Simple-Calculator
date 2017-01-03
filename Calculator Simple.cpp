#include "stdafx.h"
#include <iostream>
#include <string>

using int32 = int;
void Intro();
void Intro() {
	std::cout << "Welcome to Simple Calulator" << std::endl;
	void TakeInput();
}

void TakeInput() {
	int Answer = 0;
	std::cout << "Type a number";
	int32 firstNumber;
	std::cin >> firstNumber;
	std::cout << std::endl;
	std::cout << "Do you want to add, subtract, multiply, or divide?" << std::endl;
	std::string symbol = "";
	getline(std::cin, symbol);
	std::cout << std::endl;
	std::cout << "Type the second number" << std::endl;
	int32 secondNumber;
	std::cin >> secondNumber;
	
	if (symbol == "-") {
		Answer = firstNumber - secondNumber;
		std::cout << "Your Answer is:" << Answer << std::endl;
	}
	if (symbol == "+") {
		Answer = firstNumber + secondNumber;
		std::cout << "Your Answer is:" << Answer << std::endl;
	}
	if (symbol == "/") {
		Answer = firstNumber / secondNumber;
		std::cout << "Your Answer is:" << Answer << std::endl;
	}
	if (symbol == "*") {
		Answer = firstNumber * secondNumber;
		std::cout << "Your Answer is:" << Answer;
	}
}

