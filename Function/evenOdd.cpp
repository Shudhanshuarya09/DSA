#include <iostream>
using namespace std;

int evenOdd(int n)
{
  if (n % 2 == 0)
  {
    cout << "This is even Number" << endl;
  }
  else
  {
    cout << "This is Odd Number" << endl;
  }

  cout << endl;
}

int main()
{
  int n;
  cout << "Enter the value of n : " << endl;
  cin >> n;

  int findNumber = evenOdd(n);
  cout << findNumber << endl;

  return 0;
}