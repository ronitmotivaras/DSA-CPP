#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int size=5;
    int arr[size]={1,5,8,4,6};
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<size; i++){

        // if(arr[i] < smallest){
        //     smallest= arr[i];
        // }

        smallest = min(arr[i], smallest);
        largest = max(arr[i],largest);
    }

    cout<<"Smallest num in array : "<<smallest<<endl;
    cout<<"Largest num in array : "<<largest;
    return 0;
}