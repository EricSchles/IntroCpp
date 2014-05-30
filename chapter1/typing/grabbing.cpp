#include <iostream>
using namespace std;

int main() {

  double x = 0.0;
  double y = 0.0;
  cout << "Enter value of x: ";
  cin >> x;
  cout << "Enter value of y: ";
  cin >> y;
  cout << "Average of the two numbers is: ";
  cout << (x + y) / 2;
  cout << endl;
  cout << "Press ENTER to exit.";
  cin.ignore();
  cin.ignore();
  return 0;
}
