class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.size() == 0)
            return "";

        string prefix = "";
        string first = strs[0];

        for (int i = 0; i < first.length(); i++) {
            
            char currentChar = first[i];

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].length() || strs[j][i] != currentChar) {
                    return prefix;
                }
            }
            prefix = prefix + currentChar;
        }
        
        return prefix;
    }
};
