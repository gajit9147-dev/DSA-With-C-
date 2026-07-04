#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
int left=0;
void moveZeroes(vector<int>& nums) {
    for(int right=0; right<nums.size(); right++){
        if(nums[right]!=0){
            swap(nums[left], nums[right]);
            left++;
        }
    }
};
};
int main(){
    Solution s;
    vector<int> nums = {0,1,0,3,12};
    s.moveZeroes(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}