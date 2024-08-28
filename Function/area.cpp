#include <iostream>
using namespace std;

int pi = 3.214;
int area(int r)
{
  area = pi*r*r;
}

int main()
{
  int r;
  cout << "Enter the value of Rsdius : " <<endl;
  cin >> r;

  int result = area(r);

  return 0;
}