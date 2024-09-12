#include<iostream>
#include<vector>
using namespace std;

find(vector<int>arr)
{
  int ans = 0;
for(int i=0; i<arr.size(); i++)
{
  ans = ans ^ arr[i];
}
return ans;
}


int main()
{
int n;
cout << "Enter the number" << endl;
cin>>n;


vector<int> arr(n);
cout<<"Enter the elements in array" <<endl;
for(int i=0; i<arr.size(); i++)
{
  cin>>arr[i];
}

int uniqueElement = find(arr);
cout << "Unique number is :" << uniqueElement <<endl;


  
  return 0;
}