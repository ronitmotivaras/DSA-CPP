#include<iostream>
using namespace std;

int main()
{
    int size=7;
    int arr[size]={1,2,3,4,1,2,3};
    for(int i=0; i<size;i++){
    bool flag=false;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j] && i != j){// i  and j are checking index number while arr[i] and arr[j] checking value of array
                flag=true;
            }
        }
        if(flag==false){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}