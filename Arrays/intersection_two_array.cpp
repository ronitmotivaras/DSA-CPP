#include<iostream>
using namespace std;

int main()
{
    int arrsize1=7;
    int arr1[arrsize1]={1,2,4,5,6,7};
    int arrsize2=4;
    int arr2[arrsize2]={6,7,3,1};
    for(int i=0; i<arrsize1;i++){
        for(int j=0;j<arrsize2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    return 0;
}