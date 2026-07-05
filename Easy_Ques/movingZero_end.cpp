#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
void moveZeroes(vector<int>& nums) {
    size_t left = 0;
    for (size_t right = 0; right < nums.size(); right++) {
        if (nums[right] != 0) {
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
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}