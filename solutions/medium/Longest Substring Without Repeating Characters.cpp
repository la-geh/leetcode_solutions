// Title: Longest Substring Without Repeating Characters
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/

                window.insert(s[right]);
                maxLen = max(maxLen, right - left + 1);
                left++;
                window.erase(s[left]);
            }
        }
                return maxLen;
    }
};
