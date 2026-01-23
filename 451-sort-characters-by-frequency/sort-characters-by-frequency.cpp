// Abhishek kashyap
class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(256, 0);
        for (char c : s) {
            freq[c]++;
        }
        vector<string> bucket(s.length() + 1);
        for (int i = 0; i < 256; i++) {
            int f = freq[i];
            if (f > 0) {
                bucket[f].push_back((char)i);
            }
        }
        string result = "";
        for (int f = s.length(); f > 0; f--) {
            for (char c : bucket[f]) {
                result.append(f, c);  
            }
        }
        return result;
    }
};