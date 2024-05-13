#include<iostream>
using namespace std;
 
int main(){
  for (int row = 0; row < 6; row = row +1 )
  {
    if (row == 0 || row == 5)
    for (int col = 0; col< 5; col = col+1)
    {
      cout<<"*";
    }
    else
    {
     cout<<"*";
     for (int i = 0; i<3; i = i +1)
     {
      cout<<" ";
     }
     cout<<"*";
    }
    cout<<endl;

  }
  return 0;
}

//same code and concept but the generic code which means input taken by the user.
