class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        int res = 0;
        for (auto it: numSet) {
            if (numSet.find(it-1) == numSet.end()) {
                int length = 1;
                while (numSet.find(it + length) != numSet.end()){
                    length++;
                }
                res = max(res, length);
            }
        }

        return res;
    }
};
