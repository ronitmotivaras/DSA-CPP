#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};

    int maxSum=0;

    for(int st=0; st<n; st++){
        int curSum=0;
        for(int end=st; end<n; end++){
            curSum+=arr[end];
            maxSum=max(curSum,maxSum);
        }
        cout<<endl;
    }
    cout<<"Maximum subarray value is : "<<maxSum;
    return 0;
}