#include <cctype>
#include <iostream>
using namespace std;

int main() {
  
  int c = toupper('b');
  char my_name[] = "Eric Schles";
  cout << static_cast<char>(c);
  cout << my_name;
  cout << "Testing this " " out";
  return 0;
}
