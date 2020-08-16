#include <iostream>

using namespace std;

int main() {
  cout << "Please enter your name: " << flush;
  string input;
  cin >> input;
  cout << "You entered: " << input << endl;

  cout << "please enter an integer value: " << flush;
  int value;
  cin >> value;
  cout << "You entered: " << value << endl;
  return 0;
}
