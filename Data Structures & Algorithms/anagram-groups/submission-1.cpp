class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //sorts all the words characters in alphabetical order so then all anagrams would be the same. this sorted version is used as the key in the map and each key just holds a list of all the original words

        unordered_map<string, vector<string>> letterSet;
        vector<vector<string>> returnSet;
        for(string& s : strs)
        {
            string letters = s;
            sort(letters.begin(), letters.end());
            letterSet[letters].push_back(s);
        }
        for(const auto& pair : letterSet)
        {
            returnSet.push_back(pair.second);
        }
        return returnSet;
    }
};
