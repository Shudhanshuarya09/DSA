//code for the taking input and print the output of Array
#include <iostream>
using namespace std;

int main()
{
 
int arr[10];
//taking input in array 
for(int i=0; i<10; i++)
{
  cin >> arr[i] ;
}
cout << "give numbers" << endl;
//printing
cout << "printing the values in array " << endl;
for(int i=0; i<10; i++)
{  
  cout << arr[i] << " ";
}

return 0;
}