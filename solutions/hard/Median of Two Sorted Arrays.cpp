// Title: Median of Two Sorted Arrays
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/median-of-two-sorted-arrays/


    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        vector <int> merged = mergeArrays (nums1,nums2);
        int n = merged.size();
        double median;
        if (n % 2 == 0){
            median = (merged[n/2 - 1] + merged[n/2]) / 2.0;
        }
        else {
            median = merged [n/2];
        }
        return median;
