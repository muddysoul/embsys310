int func1(int arg1, int arg2, int arg3, int arg4, int arg5);
void func2();

int main()
{
  func2();
  return 0;
}

int func1(int arg1, int arg2, int arg3, int arg4, int arg5)
{
  return 0;
}

void func2()
{
  func1(1,2,3,4,5);
}