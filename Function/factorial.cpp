#include <iostream>
using namespace std;

int factoo(int n)
{
  int factii = 1;

  for (int i = 1; i <= n; i++)
  {
    factii = factii * i;
  }
  return factii;
}

int main()
{

  int n;
  cout << "Enter the number: " << endl;
  cin >> n;

  int result = factoo(n);
  cout << result << endl;
}