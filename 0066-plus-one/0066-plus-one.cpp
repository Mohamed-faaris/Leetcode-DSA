class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1,i = digits.size() - 1;
        while(carry&&i >= 0){
            int sum = digits[i] + carry;
            carry = sum/10;
            digits[i--] = sum%10;
        }
        if(carry) {
            digits.push_back(0);
            digits[0] = 1;
        }
        return digits;
    }
};