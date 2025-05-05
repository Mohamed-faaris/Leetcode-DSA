class Solution {
public:
    bool isSameAfterReversals(int num) {
        return num%10 != 0 || num == 0;
    }
};