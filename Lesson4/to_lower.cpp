#include <iostream>


const char T =10;

int main() {

	char string[T];

	std::cin >> string;

	for (size_t i=0; i<=T; ++i) {
		if (string[i] >=65 && string[i] <=97) {
			string[i] +=32;
		}
	}
	std:: cout << string<< std::endl;
	return 0;
}