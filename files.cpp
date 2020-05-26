#include <string>
#include <iostream>
#include <fstream>
using namespace std;

// reading an entire file into a single string
int main() {
  ifstream in("FillString.cpp");
  string s, line;
  while(getline(in, line))
    s += line + "\n";
  cout << s;
}
