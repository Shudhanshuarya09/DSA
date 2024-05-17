#include <iostream>
using namespace std;

int main()
{
  // //PART-1
  // for (int row = 0; row < 1; row++)
  // {
  //   for (int col = 0; col < 10; col++)
  //   {
  //     cout << " * ";
  //   }
  //   cout << endl;
  // }

  // //PART-2
  //   for (int row = 1; row < 5; row++)
  // {
  //   for (int col = 0; col < 5 - row; col++)
  //   {
  //     cout << " * ";
  //   }
  //   cout << endl;
  // }

  // //PART-3
  //     for (int row = 1; row < 5; row++)
  // {
  //   for (int col = 4; col < row*2; col++)
  //   {
  //     cout << " # ";
  //   }
  //   cout << endl;
  // }

  //  //PART-4
  //     for (int row = 1; row < 5; row++)
  // {
  //   for (int col = 6; col < 5 - row; col++)
  //   {
  //     cout << " * ";
  //   }
  //   cout << endl;
  // }

  int n;
  cin >> n;
  for (int row = 0; row < n; row++)
  {
    // first part
    for (int col = 0; col < n - row; col++)
    {
      cout << "*";
    }
    for (int col = 0; col < 2*row +1 ; col++)
    {
      cout << " ";
    }
    for (int col = 0; col < n - row; col++)
    {
      cout << "*";
    }
    cout << endl;
  }

    // sedcond part

    for (int row = 0; row < n; row++)
    {
      for (int col = 0; col < row + 1; col++)
      {
        cout << "*";
      }
      for (int col = 0; col < 2*n - 2*row - 1; col++)
      {
        cout << " ";
      }
      for (int col = 0; col < row + 1; col++)
      {
        cout << "*";
      }
      cout << endl;
    }
    
  
  
}
