#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        // spaces n-i-1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // nums 1 : i+1
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for (int j = i; j >0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}