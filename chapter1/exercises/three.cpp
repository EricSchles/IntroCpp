#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  cout << "Enter some numbers to sum, average\n";
  cout << "Please remember to terminate with a non-digit character\n";
  double n = 1;
  double count = 0;
  double count_d;
  double sum = 0;
  double ave = 0;
  while(n != 0) {
    count += 1;
    cin >> n;
    if (!cin) {
      n = 0;
    }
    sum += n;
  }
  count_d = (double) count;
  ave = sum/count_d;
  cout << "The average is " << ave << " the sum is " << sum << endl;
  cin.ignore();
  cin.ignore();
  return 0;
}
  
