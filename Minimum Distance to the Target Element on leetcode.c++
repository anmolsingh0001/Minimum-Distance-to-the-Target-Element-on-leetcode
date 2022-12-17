class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) 
    {
        vector<int>v;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == target)
                v.push_back(abs(i-start));
        }
        sort(v.begin(), v.end());
        return v[0];
        
    }
};