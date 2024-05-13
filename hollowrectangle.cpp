#include<iostream>
using namespace std;

int main()
{
    // // int col;
    // for (int row=0; row<3; row=row+1)
    // {
    // if( row == 0 || row == 2)
    // {
    //     for (int col=0; col<5; col=col+1 )
    //     {
    //         cout<< "* ";
    //     }
        
    // }
    // else
    //     {
    //         cout<< "* ";
    //         for (int i=1; i<4; i=i+1)
    //         {
    //             cout<< "  ";
    //         }
    //         cout<< "* ";
            
    //     }
    //     cout<<endl;
        
    // }


    //hollow rectangle with value of n = 6

    for(int row = 0; row<6; row++)
    {
        if( row == 0 || row == 5)
        {
        for(int col=0; col<5; col++)
        {
            cout<< "* ";
        }
        }
        else
        {
            cout<< "* ";
            for(int col=1; col<4; col++)
            {
                cout<< "  ";
            }
            cout<< "* ";
        }
        cout<<endl;
    }
    

}