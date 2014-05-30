#include <iostream>

namespace eric {
  double x = 0;
  double pi = 3.141592;
}
int main() {
  using namespace std;
  cout << "The value of pi is ";
  cout << eric::pi << endl;
  cout << "Press ENTER to exit." << endl;
  cin.ignore();
  return 0;
}
