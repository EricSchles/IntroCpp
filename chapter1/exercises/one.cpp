#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

  cout << "Enter a bunch of numbers to sum" << endl;
  cout << "You must end the sequence with a 0 or non-digit number"<< endl;
  cout <<"Enter the sequence: " << endl;
  
  double n = 1;
  double sum = 0.0;
  while ( n != 0.0 ) {
    cin >> n;
    if (!cin) {
      n = 0.0;
    }
    sum += n;
  }
  cout << "The sum is: "<<sum<<endl;
  cout <<"press ENTER to exit";
  cin.ignore();
  cin.ignore();
  return 0;
}
