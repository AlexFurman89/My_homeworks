#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {

	int number;

	cout << "Enter the number\n";
	cin >> number;

	int summ = 0;
	int i =0;

	for ( i = 1; i <= number; i++) {
		summ += i;
		if ( i < number) {
		cout << i << "+";
		} else if ( i == number) {

		cout << i << "=";
			}
		}
cout << summ  << endl;

cout << "Average = " << summ / (i - 1) << endl;

cout <<"\n";

return 0;
}