#include <iostream>
using namespace std;

int main()
{
  int arr[100];

  int n;
  cout << "Enter the number you want to insert" << endl;
  cin >> n;

  cout<< "Enter the number you want to insert in array " << endl;
  for(int i=0; i<n; i++)
  {
    cin >> arr[i] ;
  }

  cout<< "printing the values" << endl;
for(int i=0; i<n; i++)
{
  cout << 2 * arr[i]  << " ";
}

return 0;
}

