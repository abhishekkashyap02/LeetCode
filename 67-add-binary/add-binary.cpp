// Abhishek Kashyap

class Solution {
public:
    string addBinary(string a, string b) {

        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        string result = "";

        while (i >= 0 || j >= 0 || carry == 1) {

            int sum = carry;

            if (i >= 0) {
                sum = sum + (a[i] - '0');
                i = i - 1;
            }

            if (j >= 0) {
                sum = sum + (b[j] - '0');
                j = j - 1;
            }

            int digit = sum % 2;
            carry = sum / 2;

            result.push_back(digit + '0');
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
