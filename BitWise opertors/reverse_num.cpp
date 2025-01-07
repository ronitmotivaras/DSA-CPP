#include<iostream>
using namespace std;
int main()
{
    int num=124;
    int rem,rev=0;
    while(num>0){
        rem = num%10;
        num/=10;
        rev= (rev*10)+rem;
    }
    cout<<rev;
    return 0;
}