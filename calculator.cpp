/*
** Calculator.cpp - a binary to integer converter for signed/unsigned bits (MAX 32 bits) 
** Bradley Snyder brs80@zips.uakron.edu
*/

#include <string>
#include <iostream>
#include <cmath>


int getBinary(std::string s) {
	return std::stoi(s, nullptr, 2); 
}

int main() {

	std::string binary = "", sign = "";
	int decimal = 0;

	std::cout << "\n\n" << "Welcome to the binary->decimal calculator!" << "\n"; 
	std::cout << "Enter \"x\" for binary value to exit" << "\n\n"; 

	while(binary != "X" && binary != "x" && binary != "exit" && binary != "Exit") { 
		std::cout << "Enter the binary value: ";
		std::cin >> binary;
		std::cout << "is it (signed/unsigned) (s/u): ";
		std::cin >> sign;

		decimal = 0; 
		if(sign == "0" || sign == "s" || sign == "signed") {
			if(binary[0] == '0') {
				for(int i=1; i<binary.size(); i++) {
					int temp = binary[i] - '0'; 
					decimal += temp * pow(2.0 , binary.size()-i-1);
				}
				std::cout << decimal << "\n"; 
			}
			if(binary[0] == '1') { 
				for(int i=1; i<binary.size(); i++) { 
					int temp = binary[i] - '0';
					temp == 0 ? temp=1 : temp=0;
					decimal += temp * pow(2.0 , binary.size()-i-1);
				}
				decimal = -decimal-1;
				std::cout << "-----------------------------------------------------------------------------" << "\n"; 
				std::cout << "signed binary value -> " << binary << "\n" << "decimal value-> " << decimal << "\n"; 
				std::cout << "-----------------------------------------------------------------------------" << "\n\n"; 
			}
		} else {
			int dec = getBinary(binary);
			std::cout << "-----------------------------------------------------------------------------" << "\n"; 
			std::cout << "unsigned binary value -> " << binary << "\n" << "decimal value -> " <<  dec << "\n";
			std::cout << "-----------------------------------------------------------------------------" << "\n\n"; 

		}
	}
}
