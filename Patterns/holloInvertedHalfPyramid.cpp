#include <iostream>
using namespace std;

int main()
{
  
  int n;
  cin >> n;

  // for(int row = 0; row < n; row++)    //n = 8
  // {
  //   if (row == 0 || row == n)
  //   {
  //     for (int col = 0; col < n; col++)
  //     {
  //       cout << " * ";
  //     }
  //   }
  //     else
  //     {
  //       cout<<" * ";
  //       for (int col = 0; col < n - 1 - row; col++)
  //       {
  //         cout << "  ";
  //       }
  //        cout<<" * ";
  //     }
  //   cout << endl;
  // }


for (int i = 0; i<n; i++)
{
  for (int j = 0; j< n; j++)
  {
    if(i==0 || j ==0 || j== n-i-1)
    {
      cout<< "*";
    }
    else{
      cout<<" ";
    }
  }
  cout<<endl;
}

return 0;

}