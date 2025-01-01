#include <iostream>
using namespace std;

int main()
{
// practice question print sum of all odd numbers 1 to n
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int oddSum =0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0){     //i==0 for even numbers
            cout<<i<<" ";
            oddSum=oddSum+i;
        }
    }
    cout<<"Sum of odd Numbers : "<<oddSum;
}