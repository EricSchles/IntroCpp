#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

  cout << endl;
  cout << "Enter how many times the loop should run:";
  int n = 0;
  cin >> n;
  while(n < 0  && !cin ) {
    cout << "Please enter a valid number:";
    cin >> n;
    if(cin) {
      cin.clear();
    }
  }
  double prev1 = 1.0;
  double prev2 = 1.0;
  double current = 0.0;
  cout.precision(15);

  while( n-- > 0 ) {
    current =  prev1 + prev2;
    prev2 = prev1;
    prev1 = current;
  }
  
  cout << current << "\t";
  cout << prev1/prev2<<endl;
  cout <<"Press Enter to continue";
  cin.ignore();
  cin.ignore();
  return 0;
}
