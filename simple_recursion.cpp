#include <iostream>
using namespace std;

// demonstrating simple recursion

void removeHat(char cat) {
  for(char c = 'A'; c < cat; c++)
    cout << " ";
  if (cat <= 'Z') {
    cout << "cat " << cat << endl;
    removeHat(cat + 1);
  } else
    cout << "VOOOM!!!" << endl;
}

int main() {
  removeHat('A');
}
          
