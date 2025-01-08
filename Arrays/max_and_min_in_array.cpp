#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int arr[size]={10,2,30,4,5};
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Minimum element in array : "<<min<<endl;
    cout<<"Maximum element in array : "<<max;
    return 0;
}