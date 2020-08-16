#include <iostream>

using namespace std;

int main() {

  int numberCats = 5;
  int numberDogs = 3;
  int numberAnimals = numberCats + numberDogs;

  cout << "Number of cats: " << numberCats << endl;
  cout << "Number of dogs: " << numberDogs << endl;

  cout << "Total number of animals: " << numberAnimals << endl;

  cout << "New dog acquired!" << endl;
  numberDogs += 1;
  
  numberAnimals = numberCats + numberDogs;

  cout << "Total number of animals: " << numberAnimals << endl;
  return 0;
}