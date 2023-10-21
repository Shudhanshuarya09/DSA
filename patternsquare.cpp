#include<iostream>
using namespace std;
int main(){
    // for(int row=0; row<4; row=row+1)
    // {
    //     for(int col=0; col<4; col=col+1)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }


    //(n number given by user)
    int n;
    cin>>n;
    for(int row=0; row<n; row=row+1)
    {
        for(int col=0; col<n; col=col+1)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}