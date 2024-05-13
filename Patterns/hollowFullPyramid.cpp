#include <iostream>
using namespace std;

int main()
{

  // another way of writing code of full pyramid
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int k = 0;
    for (int j = 0; j < ((2 * n) - 1); j++)
    {
      if (j < n - i - 1)
      {
        cout << " ";
      }
      else if (k < 2 * i + 1)
      {
        // if (k == 0 || k == 2 * i || i == n - 1)

        //   cout << "*";
        // // cout<<" ";
        // else

        //   cout << " ";
        cout<<"*";

        k++;
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}