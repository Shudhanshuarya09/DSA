#include<iostream>
using namespace std;
int main(){
    //Example 1
    // int score;
    // cout<< "Enter the score" << endl;
    // cin>>score;

    // if(score>300)
    // {
    //     cout<< "India will win" << endl;
    // }
    // else{
    // cout<< "Pak will win" << endl;
    // }

    //Example 2
    // int marks;
    // cout<< "Enter the marks"<< endl;
    // cin >> marks;
    // if(marks>=90){
    //     cout<< "Your grade A" << endl;
    // }
    // else if(marks>=80){
    //     cout <<"Your grade B" << endl;

    // }
    // else if(marks>=60){
    //     cout<<"Your grade C"<< endl;
    // }
    //  else if(marks>=40){
    //     cout<<"Your grade D"<< endl;
    // }
    //  else{
    //     cout<<"Fail"<< endl;
    // }


    //Concept of Nesting of conditionals(if-else)
    //  int marks;
    //  cout<< "Enter the marks"<< endl;
    //  cin >> marks;
    //  if(marks>=90){
    //     cout << "Grade A"<< endl;
    //  }
    //  else{
    //     if(marks>=80){
    //         cout << "Grade B"<< endl;
    //     }
    //     else{
    //         if(marks>=60){
    //             cout<<"Grade C"<< endl;
    //         }
    //         else{
    //             if(marks>=40){
    //                 cout<<"Grade D" <<endl;
    //             }
    //             else{
    //                 cout <<"Grade F" << endl;
    //             }
    //         }
    //     }
    //  }

    //Example 3
    int bronum;
    cout<<"Enter a number"<<endl;
    cin>>bronum;
    if(bronum==0){
        cout<<"Baat ban jayegi"<< endl;
    }
    else{
        cout << "Batt nhi banegi" << endl;
    }
}