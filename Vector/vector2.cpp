#include<iostream>
#include<vector>
using namespace std;

int main()
{
  //taking array elememts in run time
int n;
cin >>n;
cout <<"Enter the value of n" << endl;

vector<int> brr(n, -19);
cout << "Size of b " << brr.size() <<endl;
cout<< "capacity of b " << brr.capacity() << endl;

for (int i=0; i<brr.size(); i++)
{
  cout<<brr[i] << " ";
}
cout<<endl;

cout<< "Printing crr" << endl;
vector<int> crr{10,20,30};
for(int i =0; i<crr.size(); i++ )
{
  cout<< crr[i] << " ";
}
cout << endl;
  return 0;
}