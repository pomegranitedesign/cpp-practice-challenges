#include <iostream>

using namespace std;

int main() {
  float lowerLimit = 0;
  float upperLimit = 0;
  int step = 0;

  cout << "Please give in a lower limit, limit >= 0: ";
  cin >> lowerLimit;

  cout << "Please give in a higher limit, 10 > limit <= 50000: ";
  cin >> upperLimit;

  cout << "Please give in a step, 0 < step <= 10: ";
  cin >> step;

  cout << endl;
  cout << "Celsius         Fahrenheit" << endl;
  cout << "-------         ----------" << endl;
  for (float i = lowerLimit; i < upperLimit; i += step) {
    float fahrenheit = (i * 1.8) + 32.0;
    cout << i << "              " << fahrenheit << endl;
  }

  return 0;
}
