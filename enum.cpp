enum ShapeType
{
  circle,
  square,
  rectangle
};

/*
Enumerated data types basically use words instead of numbers.
Treat shapetype as an array of integeres 0, 1, 2...
*/

int main()
{
  ShapeType shape = circle;

  switch(shape)
  {
    case circle: break;
    case square: break;
    case rectangle: break;
  }
}
