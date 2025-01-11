#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<int>vec;//empty vecotr initalised

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

    // cout<<"Size  = "<<vec.size()<<endl;//for check the size of vector

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

    cout<<vec.at(1);//for index value
    return 0;
}