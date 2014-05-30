#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int sum = 0;
  int n = 1;
  cout << "Enter a list of numbers, terminated with 0";
  cout << "or non-digit." << endl << "Enter: ";
  while ( n != 0) {
    cin >> n;
    if (!cin) {
      n = 0;
    }
    sum += n;
  }

  cout << "Total is: " << sum << endl;
  cout << "Press ENTER to exit.";
  cin.ignore();
  cin.ignore();
  return 0;
}
