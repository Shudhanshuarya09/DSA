#include <iostream>
using namespace std;

float pi = 3.214;
float area( float r)
{
  float result = pi*r*r;
  return result;
}

int main()
{
  int r;
  cout << "Enter the value of Radius : " <<endl;
  cin >> r;

  float answer = area(r);
  cout << answer << endl;

  return 0;

}