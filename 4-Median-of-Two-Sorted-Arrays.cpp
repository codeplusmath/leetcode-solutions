#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        vector<int> merged(n);
        merge(nums1.begin(),nums1.end(), nums2.begin(),nums2.end(), merged.begin());
        double median;
        if(n%2!=0){
            median = merged[(n)/2];
        }
        else{
             median = (merged[n/2] + merged[n/2 - 1])/2.00;
        }
        return median; 
    }
};

static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
