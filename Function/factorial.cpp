#include <iostream>
using namespace std;

int factoo(int n)
{
  int fact = 1;

  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}

int main()
{

  int n;
  cout << "Enter the number: " << endl;
  cin >> n;

  int result = factoo(n);
  cout << result << endl;
}