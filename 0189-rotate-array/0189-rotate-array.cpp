class Solution { // Reverse method
public:
    void rotate(vector<int>& nums, int k) {
        
        int n= nums.size();
        k %=n;
        reverse(nums.begin(), nums.end());// reverse all the element
        reverse(nums.begin(), nums.begin() + k);//points to the k-th index (the end iterator is not included).

        reverse(nums.begin() + k, nums.end()); //  output 567123
    }
};