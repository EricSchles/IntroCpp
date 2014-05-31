#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

  char c = 0;
  int si = 0;
  unsigned int ui = 0;
  double d = 0;
  d = ui = si = c;
  if (typeid(c + c) == typeid(int)) {
    cout << "type of (char + char) is int" << endl;
  }
  if (typeid(si + ui) == typeid(unsigned)) {
    cout << "type of (int + unsigned int) ";
    cout << "is unsigned" << endl;
  }
  if (typeid(si + d) == typeid(double)) {
    cout << "type of (int + double) is double" <<endl;
  }
  cin.ignore();
  return 0;
}
