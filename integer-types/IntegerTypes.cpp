#include <iostream>
#include <limits.h>

using namespace std;

int main() {
  int intValue = 369;
  cout << "\n" << "intValue variable assigned value: " << intValue << endl;

  cout << "\n"  << "INT_MAX: " << INT_MAX << endl;
  cout << "INT_MIN: " << INT_MIN << endl;

  cout << "\n"  << "INTMAX_MAX: " << INTMAX_MAX << endl;
  cout << "INTMAX_MIN: " << INTMAX_MIN << endl;

  cout << "\n"   << "LONG_MAX: " << LONG_MAX << endl;
  cout  << "LONG_MIN: " << LONG_MIN << endl;
  long int lValue = 9223372036854775807;
  cout  << "lValue variable assigned value: " << lValue << endl;

  cout << "\n"  << "SHRT_MAX: " << SHRT_MAX << endl;
  cout << "SHRT_MIN: " << SHRT_MIN << endl;
  short int sValue = 32767;
  cout << "sValue variable assigned value: " << sValue << endl;

  cout << "\n" << "Size of int: " << sizeof(int) << endl;
  cout << "Size of short int: " << sizeof(short int) << endl;
  cout << "Size of long int: " << sizeof(long int) << endl;
  cout << "Size of unsigned int:" << sizeof(unsigned int) << endl;

  return 0;
}