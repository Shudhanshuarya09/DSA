//LINEAR SEARCH

#include <iostream>
using namespace std;

bool find(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)

      return true;
  }
  return false;
}

int main()
{
  int arr[5] = {2, 3, 4, 5, 6};
  int size = 5;

  cout << "Enter the key to find: ";
  int key;
  cin >> key;

  if (find(arr, size, key))
  {
    cout << "Found" << endl;
  }
  else
  {
    cout << "Not Found" << endl;
  }
}