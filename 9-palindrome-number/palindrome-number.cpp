class Solution {
public:
    bool isPalindrome(int x) {
        // O(log10x) time O(log10x) space
        //O(d) time O(d) space
        if (x < 0) return false;
        std::string s = std::to_string(x);
        std::string r = s;
        std::reverse(r.begin(), r.end());
        return r == s;
    }
};