#include <iostream>
using namespace std;

int main()
{
    // square pattern
    int n = 4;
    for (int i = 1; i <= n; i++)// outer loop
    { 
        for (int j = 1; j <= n; j++)// inner loop
        { 
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}