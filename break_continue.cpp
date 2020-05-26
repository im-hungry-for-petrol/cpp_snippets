#include <iostream>
using namespace std;

//illustrating the use of 'break' and 'continue' statements
int main() {
  char c;
  while(true) {
    cout << "MAIN MENU:" << endl;
    cout << "1: left, r: right, q: quit -> ";
    cin >> c;
    if(c == 'q')
      break;
    if(c == 'l') {
      cout << "LEFT MENU:" << endl;
      cout << "select a or b: ";
      cin >> c;
      if (c == 'a') {
        cout << "you chose 'a'" << endl;
        continue;
      }
      if (c == 'b') {
        cout << "you chose 'b'" << endl;
        continue;
      }
      else {
        cout << "you didn't chose a or b!" << endl;
        continue;
      }
    }
    if (c == 'r') {
      cout << "RIGHT MENU:" << endl;
      cout << "select c or d: ";
      cin >> c;
      if(c == 'c') {
        cout << "you chose 'c'" << endl;
        continue;
      }
      if (c == 'd') {
        cout << "you chose 'd'" << endl;
        continue;
      }
      else {
        cout << "you didn't chose c or d!" << endl;
        continue;
      }
    }
    cout << "quitting menu..." << endl;
  }
}
