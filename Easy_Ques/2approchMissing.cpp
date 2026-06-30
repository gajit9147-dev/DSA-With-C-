#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:

    int missingNumber(vector<int>& nums){

        int n = nums.size() + 1;// size of the array should be n+1 since one number is missing
        int sum= n*(n+1)/2;
        int actualSum=0;
        for(int value : nums){
            actualSum += value;
        }
        return sum - actualSum;

    }
};
 

int main(){
    vector<int> nums = {2,3,4,6,5};
    Solution s;
    cout << s.missingNumber(nums) << endl;

};