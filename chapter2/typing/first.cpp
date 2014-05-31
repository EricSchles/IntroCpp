#include <cctype>
#include <iostream>
using namespace std;

int main() {
  
  int c = toupper('b');
  char my_name[] = "Eric Schles";
  cout << static_cast<char>(c);
  cout << my_name;
  cout << "Testing this " " out"<<endl;
  char very_long[] =  "Apparrently you can do this"
    "because c++ is crazy"
    "so crazy infact";
  cout << "\a"; //makes a beep? - Maybe on some systems.
  cout << "\141";
  
  return 0;
}
