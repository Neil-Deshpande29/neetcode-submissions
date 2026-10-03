class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int n: nums)
            freq[n]++; 
        vector<int> top;
        std::multimap<int, int> invfreq;
        for(auto pair : freq)
        {
            invfreq.insert({pair.second, pair.first});
        }
        auto rit = invfreq.rbegin(); //reverse iterator
        for(int i = 0; i<k; ++i)
        {
            top.push_back(rit->second);
            ++rit;
        }

        return top;
       
    }
};
