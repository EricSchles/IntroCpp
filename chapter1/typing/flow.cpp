#include <iostream>
using namespace std;

int main() {
  double x = 0.0;
  double y = 0.0;

  cout << "Enter value of x: ";
  cin >> x;
  cout << "Enter value of y: ";
  cin >> y;
  if (x > y) {
    cout << "The max is " << x << endl;
  } else {
    cout << "The max is " << y << endl;
  }
  cout << "Press ENTER to exit."<<endl;
  cin.ignore();
  cin.ignore();
  return 0;
}
