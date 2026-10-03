class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int n: nums)
            freq[n]++; 
        priority_queue<pair<int,int>> heap;
        for (auto& vals : freq)
            heap.push({vals.second, vals.first});

        vector<int> top;
        for (int i = 0; i < k; i++) {
            top.push_back(heap.top().second);
            heap.pop();
        }
        return top;
       
    }
};
