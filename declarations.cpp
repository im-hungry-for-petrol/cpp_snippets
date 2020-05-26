extern int i;           // declaration without definition
extern float f(float);  // function declaration

float b;                // declaration and definition
float f (float a) {     // definition
  return a + 1.0;
}

int i;                  // definition
int h (int x) {         // declaration and definition
  return x + 1
}

int main() {
  b = 1.0;
  i = 2;
  f(b);
  h(i);
}
