#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int row = 0; row < n*2 - 1; row++)
    // {
    //   int col =0;
    //     if ( row == 0 || n*2 - 2 || col == 0 || n*2 -2)
    //     {
    //       for(; col<n*2 -1; col++)
    //       {
    //         cout<<n;
    //       }
    //     }

    //   cout << endl;
    // }

    //  for (int row =0; row <n; row++)
    //       {
    //           for (int col =0; col<n-row-1; col++)
    //           {
    //               cout<<" ";
    //           }
    //           for (int col=0; col<2*row +1; col++)
    //           {
    //               cout<<"*";
    //           }
    //           cout<<endl;
    //       }

    //    for (int row=0; row<n; row++)
    //         {
    //             for (int col=0; col<row+1; col++)
    //             {
    //                 cout<<col+1<<" ";
    //             }
    //             cout<<endl;
    //         }

    // for (int row =0; row< n; row++)
    //         {
    //             for(int col =0; col<n-row-1; col++)
    //             {
    //                 cout<<" ";
    //             }

    //             for(int col=0; col<row+1;  col++)
    //             {
    //                 cout<<"*";
    //             }
    //             cout<<endl;
    //         }

    //          for (int row =0; row< n; row++)
    //         {
    //             for(int col =0; col<row+1; col++)
    //             {
    //                 cout<<" ";
    //             }

    //             for(int col=0; col<n-row;  col++)
    //             {
    //                 cout<<"*";
    //             }
    //             cout<<endl;
    //         }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (col == 2 && row > 1 || col==row && row<2 || row==0 && col == n-1 || row==1 &&  col== n-2)
                {
                    cout << "*";
                }
                else {
                    cout<<" ";
                }
        }
        cout<<endl;
    }
}