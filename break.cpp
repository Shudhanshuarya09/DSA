#include <iostream>
using namespace std;

int main()
{
  // int n =6;
  // for (int i =0; i<n; i++)
  // {
  //   cout<<"Arya"<<endl;
  //   break;                  //break keyword lgaate hi loop se bhr agya ekbr chlkr
  // }
  // cout<<"Shudhasnhu"<<endl;



  //continue :- agr kisi v iteration ko skip krwana ho then we use this continue keyword

 int n=5;
 for(int i =1; i<n; i++)
 {
  if(i ==2)
  continue;
  cout<<"Arya"<<endl;
 }
}