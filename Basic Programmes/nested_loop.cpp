#include<iostream>
using namespace std;

int main()
{
    int row=10;
    for(int i=1;i<=row;i++){    //row
        int column=5;
        for(int j=1;j<=column;j++){ //column
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}