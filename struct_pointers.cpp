typedef struct Structure
{
  char c;
  int i;
  float f;
  double d;
} Stucture;

int main()
{
  Strucutre s1, s2;
  Structure* sp = &s1;
  sp->c = 'a';
  sp->i = 1;
  sp->f = 3.14;
  sp->d = 0.00093;
  sp = &s2;
  sp->c = 'a';
  sp->i = 1;
  sp->f = 3.14;
  sp->d = 0.00093;
}
