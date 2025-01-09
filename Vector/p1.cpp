#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<int>vec;

    // vector<int> vec={1,2,3};
    // cout<<vec[0];

    // vector<int> vec (5,0);


    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;
    // cout<<vec[3]<<endl;
    // cout<<vec[4]<<endl;

    // for(int i: vec){
    //     cout<<i<<endl;
    // }

    vector <char > vec {'a','b','c','d','e'};

    // cout<<"Size  = "<<vec.size()<<endl;

    // vec.push_back('f');

    // cout<<"Size  = "<<vec.size()<<endl;

    // for(char val: vec){
    //     cout<<val<<endl;
    // }

    // vec.pop_back();

    // cout<<"Size  = "<<vec.size()<<endl;

    // for(char val: vec){
    //     cout<<val<<endl;
    // }

    // cout<<vec.front();
    // cout<<vec.back();

    cout<<vec.at(1);
    return 0;
}