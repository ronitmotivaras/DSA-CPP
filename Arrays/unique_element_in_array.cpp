#include<iostream>
using namespace std;

int main()
{
    int size=7;
    int arr[size]={1,2,3,4,1,2,3};
    bool flag=false;
    for(int i=0; i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                flag=true;
            }
            if(flag==false){
                cout<<arr[i]<<endl;
            }
        }
    }
    return 0;
}