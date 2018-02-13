#include <string> 
#include <iostream> 


int getBinary(std::string s) {
	return std::stoi(s, nullptr, 2); 
}

struct binary { }; 

int main() {
	std::string binary = ""; 
	std::string sign = ""; 
	std::cout << "Enter the binary string: ";
	std::cin >> binary;
	std::cout << "is it positive/negative (0/1)(p/n): "; 
	std::cin >> sign;
 	// throw a condition here depending on pos/neg"
	if(sign == "0" || sign == "p" || sign == "positive") { 
		int dec = getBinary(binary);
		std::cout << dec << "\n"; 
	} 

}  
