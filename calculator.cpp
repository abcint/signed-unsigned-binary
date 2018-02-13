#include <string> 
#include <iostream>
#include <cmath> 


int getBinary(std::string s) {
	return std::stoi(s, nullptr, 2); 
}

struct binary { }; 

int main() {
	std::string binary = ""; 
	std::string sign = ""; 
	std::cout << "Enter the binary string: ";
	std::cin >> binary;
	std::cout << "is it signed/unsigned (0/1)(s/u): "; 
	std::cin >> sign;
 	// throw a condition here depending on pos/neg"
	if(sign == "0" || sign == "s" || sign == "signed") { 
		for(int i=0; i < binary.size(); i++) { 
			std::cout << binary[i];
		}  
	} else { 
		int dec = getBinary(binary);
		std::cout << dec << "\n"; 
	} 
}  
