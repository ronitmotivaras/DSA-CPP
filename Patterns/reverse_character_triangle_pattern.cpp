#include <iostream>
using namespace std;

int main()
{
    //Reverse character Tringle Pattern
    int n = 4;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    { 
        for (int j = i; j >=0; j--)
        { 
            cout<<ch+n<<" ";
            ch--;
        }
        cout << endl;
    }
    return 0;
}
// A
// B A
// C B A
// D C B A