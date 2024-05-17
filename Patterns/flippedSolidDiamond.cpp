#include <iostream>
using namespace std;

int main()
{
  //PART-1
  for (int row = 0; row < 1; row++)
  {
    for (int col = 0; col < 10; col++)
    {
      cout << " * ";
    }
    cout << endl;
  }

  //PART-2
    for (int row = 1; row < 5; row++)
  {
    for (int col = 0; col < 5 - row; col++)
    {
      cout << " * ";
    }
    cout << endl;
  }
  
}