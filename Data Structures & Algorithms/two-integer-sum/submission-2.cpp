class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();++i){
            auto ele = map.find(target-nums[i]);
            if(ele!=map.end()){
                return{ele->second,i};
            }
            map.insert({nums[i],i});
        }
    }
};
