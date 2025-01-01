#include<iostream>
using namespace std;

int main()
{
    int n=7;
    bool isPrime =true;
    for(int i=2;i<=n-1;i++){    //i*i<=n; 2nd logic for primr num
        if(i%n==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true)
        cout<<"Prime Number";
    else
        cout<<"Non Prime Number";
    return 0;
}