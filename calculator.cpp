#include <string> 
#include <iostream> 


int getBinary(std::string s) {
	return std::stoi(s, nullptr, 2); 
}

struct binary { }; 

int main() {
	std::string binary = ""; 
	int sign = 0; 
	std::cout << "Enter the binary string: ";
	std::cin >> binary;
	std::cout << "is it positive/negative (0/1)(p/n): "; 
	std::cin >> sign; 
 	
	int dec = getBinary(binary);
	std::cout << dec << "\n"; 

}  
