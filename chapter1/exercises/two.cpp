#include <iostream>
using namespace std;

int main() {
  
  cout << "Enter a series of digits to sum\n";
  cout << "Terminate with a non-digit character\n";
  int n = 0;
  int sum = 0;
  cin >> n;
  sum += n;
  while(cin) {
    cin >> n;
    sum += n;
  }
  cout << "The sum is "<< sum << endl;
  cin.ignore();
  cin.ignore();
  return 0;
}
