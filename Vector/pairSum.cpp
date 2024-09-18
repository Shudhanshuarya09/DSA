#include<iostream>
#include<vector>

using namespace std;

int main()
{
  vector<int> arr{10,20,40,60,70};

  //print all pairs
  //Outer loop will traverse for each elemnt
  for(int i=0; i<arr.size(); i++)
  {
    cout<<"We are at element: " << arr[i] << endl;
    int element = arr[i];

    //for every element, will traverse in aage wale elements 
    for(int j=i+1; j<arr.size(); j++)
    {
      cout<< "pair" << element >>"with" << arr[j] << endl;f
    }
  } 
  return 0;
}