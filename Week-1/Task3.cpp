#include <iostream>

int main() {
  /* TASK 3 OUTLINED BELOW */
  int number;
  std::cin >> number;

  int reversedNumber = 0;
  int remainder;

  while (number != 0) {
    remainder = number % 10;
    reversedNumber = reversedNumber * 10 + remainder;
    number /= 10;
  }

  std::cout << "Reversed Number: " << reversedNumber << std::endl;
}