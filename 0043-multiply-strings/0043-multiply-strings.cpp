class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") 
            return "0";
        
        int n = num1.size(), m = num2.size();
        vector<int> digits(n + m, 0);

        // Multiply from back (like pen & paper)
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + digits[i + j + 1];
                digits[i + j + 1] = sum % 10;
                digits[i + j] += sum / 10;
            }
        }

        // Convert to string
        string result;
        for (int d : digits) {
            if (!(result.empty() && d == 0)) // skip leading zeros
                result.push_back(d + '0');
        }
        return result.empty() ? "0" : result;
    }
};
