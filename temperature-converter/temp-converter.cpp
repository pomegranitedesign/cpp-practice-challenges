#include <iostream>

int main() {
  float lowerLimit = 0;
  float upperLimit = 0;
  int step = 0;

  std::cout << "Please give in a lower limit, limit >= 0: ";
  std::cin >> lowerLimit;

  std::cout << "Please give in a higher limit, 10 > limit <= 50000: ";
  std::cin >> upperLimit;

  std::cout << "Please give in a step, 0 < step <= 10: ";
  std::cin >> step;

  std::cout << std::endl;
  std::cout << "Celsius         Fahrenheit" << std::endl;
  std::cout << "-------         ----------" << std::endl;
  for (float i = lowerLimit; i < upperLimit; i += step) {
    float fahrenheit = (i * 1.8) + 32.0;
    std::cout << i << "              " << fahrenheit << std::endl;
  }

  return 0;
}
