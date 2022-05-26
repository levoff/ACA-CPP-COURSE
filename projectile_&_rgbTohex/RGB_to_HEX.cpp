#include <ios>
#include <iostream>
#include <iomanip>
#include <sstream>


int main(int argc, char const *argv[])
{
	// int num = 0x45;
	int R = 12;
	int G = 23;
	int B = 34;


	// C style
	printf("#%02X%02X%02X\n", R,G,B);
	
	// C++ 
	std::cout <<"#"<< std::hex << std::setw(2) << std::setfill('0') << R<<G<<B ;

	// C++20 format. must use #include <format>  
	// std::cout << format("{:#08x}", R) << std::endl;
	

	return 0;
}
