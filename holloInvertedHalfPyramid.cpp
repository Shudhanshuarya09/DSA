#include <iostream>
using namespace std;

int main()
{
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif
  int n;
  cin >> n;

  for (int row = 0; row < n; row++)
  {
    if (row == 0 || row == n)
    {
      for (int col = 0; col < n; col++)
      {
        cout << " * ";
      }
    }
      else
      {
        cout<<" * ";
        for (int col = 0; col < n - 2 - row; col++)
        {
          cout << "  ";
        }
         cout<<" * ";
      }
    cout << endl;
  }
}