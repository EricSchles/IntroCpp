#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

  char c = 0;
  int si = 0;
  unsigned char uc = 0;
  unsigned int ui = 0;
  double d = 0;
  float f = 0;
  d = ui = si = c = f = uc;
  if (typeid(f + f) == typeid(float)) {
    cout << "type of (float + float) is float" << endl;
  }
  if (typeid(f*f) == typeid(float)) {
    cout << "type of (float * float) is float" << endl;
  }
  if(typeid(uc + si) == typeid(int)){
    cout << "type of (unsigned char + signed int) is int"<<endl;
  } else if (typeid(uc + si) == typeid(unsigned char)) {
    cout << "type of (unsigned char + signed int) is unsigned char" << endl;
  }

  
  cin.ignore();
  return 0;
}
