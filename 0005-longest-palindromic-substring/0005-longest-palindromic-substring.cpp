class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int longest = 1;
        for (int center = 0; center < s.size(); center++) {
            // Odd-length palindrome, such as "aba"
            int left = center;
            int right = center;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                if (right - left + 1 > longest) {
                    start = left;
                    longest = right - left + 1;
                }
                left--;
                right++;
            }
            left = center;
            right = center + 1;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                if (right - left + 1 > longest) {
                    start = left;
                    longest = right - left + 1;
                }
                left--;
                right++;
            }
        }
        return s.substr(start, longest);
    }
};