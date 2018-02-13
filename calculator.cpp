#include<iostream> 

int getBinary(std::string s) {
        return atoi(s.c_str());
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
