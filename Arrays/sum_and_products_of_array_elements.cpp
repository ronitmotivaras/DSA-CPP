#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int arr[]={1,2,3,4,5};
    int sum=0,product=1;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        product=product*arr[i];
    }
    cout<<"Sum of all Array Elements : "<<sum<<endl;
    cout<<"Product of all array elements : "<<product;
    return 0;
}