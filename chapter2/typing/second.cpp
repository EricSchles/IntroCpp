#include <iostream>
using namespace std;

enum suit {
  heart = 1,
  diamond,
  club,
  spade
};

int main() {
  suit this_card = heart;
  suit that_card = spade;
  cout << this_card << that_card;
  return 0;
}
