
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> vals;
        for (int i : nums)
        {
            auto result = vals.try_emplace(i, 0);
            if(!result.second)
                return true;
        }
        return false;
    }
};