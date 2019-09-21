#include <cmath>
#include <iostream>
#include <limits>
#include <stdio.h>

long long dec_func(int a, int b, int c) {

  long long dec = b * b - (4 * a * c);

  std::cout << dec << std::endl;
  ;

  if (dec >= 0) {
    return dec;
  } else {
    std::cout << "There is no solution because of negative descriminant"
              << std::endl;
    return 0;
  }
}
int main(int argc, char const *argv[]) {

  int MAX = std::numeric_limits<char>::max();
  int MIN = std::numeric_limits<char>::min();
  int a, b, c;

  std::cout << "Please enter the a-argument from the range[" << MIN << " to "
            << MAX << "]" << std::endl;
  std::cin >> a;

  if (a < MIN || a > MAX) {
    std::cout << "Error a-argument" << std::endl;
    return 0;
  }

  std::cout << "Please enter the b-argument from the range[" << MIN << " to "
            << MAX << "]" << std::endl;
  std::cin >> b;

  if (b < MIN || b > MAX) {
    std::cout << "Error b-argument" << std::endl;
    return 0;
  }

  std::cout << "Please enter the c-argument from the range[" << MIN << " to "
            << MAX << "]" << std::endl;
  std::cin >> c;

  if (c < MIN || c > MAX) {
    std::cout << "Error c-argument" << std::endl;
    return 0;
  }
  double x1, x2;

  auto dec = dec_func(a, b, c);

  if (dec > 0) {
    x1 = (-b + sqrt(dec)) / (2 * a);
    x2 = (-b - sqrt(dec)) / (2 * a);
    std::cout << "The first solution x1 =" << x1 << std::endl;
    std::cout << "The second solution x2 =" << x2 << std::endl;

  } else if (dec == 0) {
    double x1;
    x1 = static_cast<double>(-b) / 2 * a;
    std::cout << "There is only one solution x =" << x1 << std::endl;
  }
  return 0;
}
