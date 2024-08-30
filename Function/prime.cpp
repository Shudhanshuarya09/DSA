#include <iostream>
using namespace std;

int prime(int n)
{

  if (n % n == 0 & n % 1 == 0 & n % 2 != 0   & n % 3 != 0 )
  {
    cout << "Prime Number" << endl;
  }
  else
  {
    cout << "Not Prime" << endl;
  }
}

int main()
{
  int n;
  cout << "Enter the number:" << endl;
  cin >> n;

  int result = prime(n);
  return result;
}