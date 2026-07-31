// Title: Palindrome Number
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
    if (x < 0) return false;
    long reversed = 0;
    long original = x;
    while (x != 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    return reversed == original;
        }
    }
};
