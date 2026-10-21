#include <iostream>

int main() {
  int n;
  std::cout << "Введите число: ";
  std::cin >> n;

  int original = n;
  int reversedNum = 0;
  int temp = n;

  while (temp > 0) {
    int digit = temp % 10;
    reversedNum = reversedNum * 10 + digit;
    temp /= 10;
  }
  if (original == reversedNum) {
    std::cout << original << " - палиндром\n";
  } else {
    std::cout << original << " - не палиндром\n";
  }

  return 0;
}