#include <iostream>
using namespace std;

int main()
{
  //AND, OR, NOT operators are easy and self-understood
  //XOR Operator              same value pe 0 and different value pe 1
  //  bool a = false;
  //  bool b = true;
  // cout<<(a^b);

  //Left shift operator    2times multiply hojata hai 1 br left shift krne pe,,,agr negative se left shift krege then it will garbage value
  // int a = 12;
  // a = a << 1;
  // cout<< a <<endl;

  //Similarly Right shift krne pe it starts giving the number \ 2 (that is opposite of left shift )

  int a =12;
  a = a>> 1;
  cout<< a <<endl;


}