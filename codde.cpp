#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int size=5;
    int arr[size]={10,5,8,4,6};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int index;

    for(int i=0; i<size; i++){

        if(arr[i] < smallest){
            smallest= arr[i];
            index=i;
        }
    }

    cout<<"Smallest num in array : "<<smallest<<endl;
    cout<<"Index is : "<<index;
    return 0;
}