#include<iostream>
using namespace std;

int reverseArr(int arr[],int sz){
    int start = 0,end = sz-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int sz=5;
    int arr[sz]={1,2,3,4,5};

    reverseArr(arr,sz);

    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}