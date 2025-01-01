#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    int count =0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0){
            count=count+i;
        }
    }
    cout<<"Sum of odd Numbers : "<<count;
}