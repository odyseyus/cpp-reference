#include <iostream>

// worst version
int main() {
  std::cout << "Enter an integer: ";

  int num{};
  std::cin >> num;

  num *= 2; // double num's value, then assign that value back to num

  std::cout << "Double that number is: " << num << '\n';

  return 0;
}
