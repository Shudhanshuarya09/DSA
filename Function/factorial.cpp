#include <iostream>
using namespace std;

int factorial(int n)
{
  for (int i = n; i>=0; i=(n-1))
  {
    cout << (n * 1) ;
  }
  cout << endl;
}

int main()
{

  int n;
  cout << "Enter the number: " << endl;
  cin >> n;

  int result = factorial(n);
  cout << result << end;
  return 0;
}