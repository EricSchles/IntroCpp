#include <cctype>
#include <iostream>
using namespace std;

int main() {
  
  int c = toupper('b');
  cout << static_cast<char>(c);
  return 0;
}
