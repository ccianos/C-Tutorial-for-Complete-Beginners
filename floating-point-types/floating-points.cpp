#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float fValue = 123.456789;

  cout << "Size of float: " << sizeof(float) << endl;
  cout << fixed << fValue << endl;
  cout << setprecision(20) << fixed << fValue << endl;

  double dValue = 123.456789;

  cout << "\n" << "Size of double: " << sizeof(double) << endl;
  cout << fixed << dValue << endl;
  cout << setprecision(20) << fixed << dValue << endl;

  long double lValue = 123.456789876543210;
  cout << "\n" << "Size of long double: " << sizeof(long double) << endl;
  cout << fixed << lValue << endl;
  cout << setprecision(20) << lValue << endl;

  return 0;
}