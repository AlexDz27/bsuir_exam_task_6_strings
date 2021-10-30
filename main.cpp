#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  const int NUMBERS_COUNT = 7;

  string numbersString = "42 30 55 66 9 122 47";
  int numbers[NUMBERS_COUNT];

  cout << "Initial string: " << numbersString << endl;

  stringstream StringStream(numbersString);
  string numberTemporaryHolder;
  for (int i = 0; StringStream >> numberTemporaryHolder; i++) {
    numbers[i] = stoi(numberTemporaryHolder);
  }

  cout << "Even numbers: ";
  for (int num : numbers) {
    if (num % 2 != 0) continue;

    cout << num << " ";
  }
  cout << "\n";

  return 0;
}
