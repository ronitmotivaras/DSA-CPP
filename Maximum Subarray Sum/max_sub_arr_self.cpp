#include<iostream>
using namespace std;
//self programme 
int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};

    int sz=(n*(n+1))/2;
    int id=0,sumArr[sz];


    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            int sum=0;
            for(int i=st; i<=end; i++){
                cout<<arr[i];
                sum+=arr[i];
            }
            cout<<" Sum = "<<sum;
            sumArr[id++]=sum;
            cout<<" ";
        }
        cout<<endl;
    }
    int maxArr;
    maxArr=sumArr[0];
    for(int i=0;i<sz; i++){
        if(sumArr[i]>maxArr){
            maxArr=sumArr[i];
        }
    }
    cout<<"Max sum is : "<<maxArr;
    return 0;
}