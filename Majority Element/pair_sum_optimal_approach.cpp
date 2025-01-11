#include<iostream>
#include<vector>
using namespace std;
//optimal approach
vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n=nums.size();
    int i=0,j=n-1;
    
    while(i<j){
        int pairsum = nums[i]+nums[j];
        if(pairsum > target){
            j--;
        }else if(pairsum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = { 2,7,11,15};
    int target = 26;//sum you want

    vector<int> ans= pairSum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}