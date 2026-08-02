class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> numbers(nums1.begin(),nums1.end());
        vector<int> result;
        for(int num : nums2){
            if(numbers.find(num) != numbers.end()){
                result.push_back(num);
                numbers.erase(num);
            }
        }
        return result;
    }
};