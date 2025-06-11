class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n= nums.size()/ 3;
        vector<int> ans;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for (auto x:mp)
        {
            if(x.second > n)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
        
    }
};