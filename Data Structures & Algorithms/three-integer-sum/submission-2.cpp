class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int i = 0;
        int j = 1;
        int k = nums.size()-1;

        while(i<nums.size()-2){
            if (i > 0 && nums[i] == nums[i-1]) { i++; continue; }
            j = i + 1; 
            k = nums.size() - 1;
            int target = -(nums[i]);
            while(j<k){
                if(nums[j]+nums[k] == target){
                    res.push_back({nums[i], nums[j], nums[k]});
                    while(j<k && nums[j] == nums[j+1]) {j++;}
                    while(j<k && nums[k] == nums[k-1]) {--k;}
                    j++;
                    k--;
                }
                else if(nums[j]+nums[k]<target){
                    j++;
                }
                else{
                    --k;
                }
            }
            i++;
        }
        return res;
    }
};
