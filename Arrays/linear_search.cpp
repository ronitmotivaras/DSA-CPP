#include<iostream>
using namespace std;

int linear(int sz,int arr[],int target){
    for(int i=0;i<sz;i++){
        if(target==arr[i]){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={3,4,2,8,5,7,6};
    int sz=7;
    int target = 8;

    cout<<linear(sz,arr,target);
    return 0;
}