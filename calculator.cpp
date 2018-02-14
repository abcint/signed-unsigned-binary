/*
** Calculator.cpp - a binary to integer converter for signed/unsigned bits - max 32 bit
** Bradley Snyder brs80@zips.uakron.edu
*/

#include <string>
#include <sstream>
#include <iostream>
#include <cmath>


int getBinary(std::string s) {
	return std::stoi(s, nullptr, 2);
}

int main() {

	std::string binary = "", sign = "";
	int decimal = 0;

	std::cout << "\n\n" << "welcome to a binary-to-decimal convertor!" << "\n"; 

	while(binary != "X" && binary != "x" && binary != "exit" && binary != "Exit") { 
		decimal = 0;
		std::cout << "Binary twos representation: ";
		getline(std::cin, binary);
		if(binary.empty()) break;

		std::cout << "(signed/unsigned) (s/u): ";
		getline(std::cin, sign);
		if(sign.empty()) sign = "u";

		if(sign == "Signed" || sign == "signed" || sign == "0" || sign == "s") {
			if(binary[0] == '0') {
				for(int i=1; i<binary.size(); i++) {
					decimal += (binary[i]-'0') * pow(2.0 , binary.size()-i-1); // xn-1 * 2^n-1 ...-> xi * 2i
				}
				std::cout << decimal << "\n";
			}
			if(binary[0] == '1') {
				for(int i=1; i<binary.size(); i++) {
					int temp = binary[i] - '0';
					temp == 0 ? temp=1 : temp=0; // changing all the 0s to 1s
					decimal += temp * pow(2.0 , binary.size()-i-1);
				}
				decimal = -decimal-1;
				std::cout << "-----------------------------------------------------------------------------" << "\n";
				std::cout << "signed binary value -> " << binary << "\n" << "decimal value-> " << decimal << "\n";
				std::cout << "-----------------------------------------------------------------------------" << "\n\n";
			}
		} else if(sign == "u" ||  sign == "unsigned") {
			int dec = getBinary(binary);
			std::cout << "-----------------------------------------------------------------------------" << "\n";
			std::cout << "unsigned binary value -> " << binary << "\n" << "decimal value -> " <<  dec << "\n";
			std::cout << "-----------------------------------------------------------------------------" << "\n\n";
		} else break;
	}
}
