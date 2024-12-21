#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter Marks : ";
    cin>>marks;

    if(marks>=90){
        cout<<"A\n";
    }else if(marks>=80 && marks<=80){
        cout<<"B";
    }else{
        cout<<"C";
    }
    return 0;
}