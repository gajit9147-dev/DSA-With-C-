#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (size_t i = 0; i < nums.size(); i++) {

            for (size_t j = i + 1; j < nums.size(); j++) {

                if (nums[i] + nums[j] == target) {
                    return {static_cast<int>(i), static_cast<int>(j)};
                }
            }
        }

        return {};
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);

    if (result.size() == 2) {
        cout << result[0] << ' ' << result[1] << endl;
    }

    return 0;
}
