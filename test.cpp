#include <cctype>
#include <cstdio>
#include <iostream>



void function(int * begin, int * end) {
	std:: cout << begin << std::endl;
	if (begin == nullptr || end == nullptr || begin == end) 
		return;
	while (begin != end) {
		std:: cout << *(begin++) << std::endl;
	}
}

int main () {
	typedef my int;

my SIZE = 3;
int array[] = {12,64,3};

function(array, array+SIZE);
std:: cout << array << '\n'<< array+1 << std::endl;

return 0;
}