/*
** Calculator.cpp - a binary to integer calculator for signed/unsigned ints
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
	std::cout << "Enter the binary string: ";
	std::cin >> binary;
	std::cout << "is it signed/unsigned (0/1)(s/u): "; 
	std::cin >> sign;

	if(sign == "0" || sign == "s" || sign == "signed") {
		if(binary[0] == '0') {
			for(int i=1; i < binary.size(); i++) {
				int temp = binary[i] - '0'; 
				decimal += temp * pow(2.0 , binary.size()-i-1);
			}
			std::cout << decimal << "\n"; 
		}
	} else {
		int dec = getBinary(binary);
		std::cout << dec << "\n";
	}
}
