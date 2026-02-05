class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        // start from last digit
        for (int i = n - 1; i >= 0; i--) {

            // if digit is less than 9
            if (digits[i] < 9) {
                digits[i] = digits[i] + 1;
                return digits;
            }

            // if digit is 9
            digits[i] = 0;
        }

        // if all digits were 9
        vector<int> result;
        result.push_back(1);

        for (int i = 0; i < n; i++) {
            result.push_back(0);
        }

        return result;
    }
};
