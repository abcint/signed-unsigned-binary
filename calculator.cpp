#include <string> 
#include <iostream> 


int getBinary(std::string s) {
	return std::stoi(s, nullptr, 2); 
}

struct binary { }; 

int main() {
	std::string binary = ""; 
	std::cout << "Enter the binary string: ";
	std::cin >> binary;
	std::cout << binary << "\n"; 
	int dec = getBinary(binary);
	std::cout << dec << "\n"; 

}  
