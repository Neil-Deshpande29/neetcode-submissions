class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> sletters;
        std::unordered_map<char, int> tletters;
        for(char c : s)
            sletters[c]++;
        for(char c : t)
            tletters[c]++;

        return sletters == tletters;
    }
};
