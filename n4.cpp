#include <iostream>
#include <vector>

int main() {
  int n;
  std::cout << "Введите число: ";
  std::cin >> n;

  int original = n;
  std::vector<int> factors;

  for (int divisor = 2; divisor * divisor <= n; ++divisor) {
    while (n % divisor == 0) {
      factors.push_back(divisor);
      n /= divisor;
    }
  }
  if (n > 1) {
    factors.push_back(n);
  }

  std::cout << original << " = ";
  for (size_t i = 0; i < factors.size(); ++i) {
    if (i > 0)
      std::cout << " x ";
    std::cout << factors[i];
  }
  std::cout << "\n";

  return 0;
}