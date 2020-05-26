int main()
{
  int i = 99;
  void *vp = &i;  // you should avoid void pointers, can crash system if used incorrectly

  /*
  Note: you cannot dereference a void pointer.

  *vp = 3;

  Must cast back into int before derefencing
  */
  *((int*)vp) = 3;
}
