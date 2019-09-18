#include <cmath>
#include <iostream>
#include <limits>
#include <stdio.h>
using namespace std;

int dec_func(int a, int b, int c) {

  int dec = b * b - (4 * a * c);

  printf("%d", dec);

  if (dec >= 0) {
    return dec;
  } else {
    printf("There is no solution because of negative descriminant");
    return 0;
  }
}

int main(int argc, char const *argv[]) {

  int MAX = std::numeric_limits<char>::max();
  int MIN = std::numeric_limits<char>::min();
  int a, b, c;

  cout << "Please enter the a-argument from the range[" << MIN << " to " << MAX
       << "]\n"
       << endl;
  cin >> a;

  if (a < MIN || a > MAX) {
    printf("Error a-argument\n");
    return 0;
  }

  cout << "Please enter the b-argument from the range[" << MIN << " to " << MAX
       << "]\n"
       << endl;
  cin >> b;

  if (b < MIN || b > MAX) {
    printf("Error b-argument\n");
    return 0;
  }

  cout << "Please enter the c-argument from the range[" << MIN << " to " << MAX
       << "]\n"
       << endl;
  cin >> c;

  if (c < MIN || c > MAX) {
    printf("Error c-argument\n");
    return 0;
  }
  int dec;
  double x1, x2;

  dec = dec_func(a, b, c);

  if (dec > 0) {
    x1 = (-b + sqrt(dec)) / (2 * a);
    x2 = (-b - sqrt(dec)) / (2 * a);
    printf("The first solution x1 = %02.f\n", x1);
    printf("The second solution x2 = %02.f\n", x2);

  } else if (dec == 0) {
    x1 = -b / 2 * a;
    printf("There is only one solution x =%02.f\n", x1);
  }
  return 0;
}