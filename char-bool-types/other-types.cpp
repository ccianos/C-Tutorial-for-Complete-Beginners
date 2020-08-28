#include <iostream>
using namespace std;

int main() {
  bool bValue = true;
  cout << bValue << endl; 

  cout << endl;

  char cValue = '7';
  cout << (int)cValue << endl;
  char cValue2 = 'g';
  cout << (int)cValue2 << endl;

  cout << endl;

  cout << "The size of char is: " << sizeof(char) << endl;

  wchar_t wValue = '*';
  cout << (char)wValue << endl;
  cout << "The size of wchar_t is: " << sizeof(wchar_t) << endl;

  return 0;
}