// Title: Median of Two Sorted Arrays
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    vector<int> mergeArrays (const vector<int>& nums1, const vector<int>& nums2){
        vector <int> result;
        int i = 0, j = 0;

            while (i < nums1.size() && j < nums2.size()) {
                if (nums1[i] <= nums2[j])
                    result.push_back(nums1[i++]);
                else
                    result.push_back(nums2[j++]);
            }
            while (i < nums1.size())
                result.push_back(nums1[i++]);
            
            while (j < nums2.size())
                result.push_back(nums2[j++]);
        
        return result;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        vector <int> merged = mergeArrays (nums1,nums2);
        int n = merged.size();
        double median;
        if (n % 2 == 0){
            median = (merged[n/2 - 1] + merged[n/2]) / 2.0;
        }
        else {
            median = merged [n/2];
        }
        return median;
    }
};



