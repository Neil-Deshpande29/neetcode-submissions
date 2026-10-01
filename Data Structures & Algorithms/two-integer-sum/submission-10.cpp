class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nummap;
        for(int i = 0; i<nums.size(); i++)
            nummap[nums.at(i)] = i;
        
        for(int i = 0; i<nums.size(); i++)
        {
            int remainder = target-nums.at(i);
            if (nummap.contains(remainder) && i!= nummap[remainder])
            {
                int j = nummap[remainder];
                return {i,j};
            }
        }
    }
};
