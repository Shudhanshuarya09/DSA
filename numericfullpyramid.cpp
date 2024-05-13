#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<n-row; col++)
        {
            cout <<"* ";
        }
        for(int col=0; col<n-row; col++)
        {
        cout<<1+1;
        }
        // for(int col=0; col<row+2; row++)
        // {
        //     cout<<"* ";

        // }
        cout<<endl;
    }
}
