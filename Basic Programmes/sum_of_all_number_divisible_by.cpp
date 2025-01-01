#include<iostream>
using namespace std;

int main()
{
    int n=9;
    int div=3,sum=0;
    for(int i=1;i<=n;i++){
        if(i%div==0){
            sum+=i;
        }
    }
    cout<<"Sum of all numbers diviible "<<div<<" : "<<sum;
    return 0;
}