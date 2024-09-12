#include<iostream>
#include<vector>
using namespace std;

int main()
{
//   int a[10];
//   cout <<"Enter elements of array a:" << endl;
 
//   for(int i=0; i<10; i++)
//   {
//     cin>>a[i];
//   }


//   int b[10];
//   cout <<"Enter elements of array b:" << endl;
 
//    for(int i=0; i<10; i++)
//   {
//     cin>>b[i];
//   }


//   vector<int>arr;
//   for(int i=0; i<10; i++)
//   {
//     arr.push_back(a[i]);
//   }
//    for(int i=0; i<10; i++)
//   {
//     arr.push_back(b[i]);
//   }

// for(int i=0; i <10; i++)
// {
//   cout << arr[i]<< " ";
// }



int arr[]= {1,5,7,4,8};
int sizea = 5;
int brr[]= {2,5,7,6};
int sizeb=5;

vector<int> ans;
for(int i=0; i<sizea; i++)
{
  ans.push_back(arr[i]);
}

for(int i=0; i<sizeb; i++)
{
  ans.push_back(brr[i]);
}

for(int i=0; i<ans.size(); i++)
{
  cout << ans[i] << " ";
}
return 0;
}