#include <iostream>
using namespace std;

int main()
{

  int arr[] = {2, 4, 5, 1, 3, 7, 9, 57, 86, 91};
  int size = 11;

  int maxi = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > maxi)
    {
      maxi = arr[i];
    }
  }
  cout << "maximum number is " << maxi << endl;
  return 0;
}