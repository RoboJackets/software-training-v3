#include <iostream>

int main() {
  /* TASK 1 OUTLINED BELOW */
  int n;
  std::cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}