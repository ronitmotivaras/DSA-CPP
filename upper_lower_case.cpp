#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Character : ";
    cin >> ch;

    // character check method
    //  if(ch>='A' && ch<='Z'){
    //      cout<<"Uppercase";
    //  }else if(ch>='a' && ch<='z'){
    //      cout<<"Lowercase";
    //  }

//ascii value check method
    if (ch >= 65 &&ch <= 90)
    {
        cout << "Uppercase";
    }

    else if (ch >= 97 && ch <= 122)
    {
        cout << "Lowercase";
    }
    return 0;
}