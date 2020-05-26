#include <iostream>
using namespace std;

void f(int *p)
{
  cout << "p = " << p << endl;
  cout << "*p = " << *p << endl;
  *p = 5;
  cout << "p = " << p << endl;
}

int main()
{
  cout << "Program for recognizing the significance of pointers and changing functions";
  int x = 47;
  cout << "x = " << x << endl;
  cout << "&x = " << &x << endl;
  f(&x);
  cout << "x = " << x << endl;
}
