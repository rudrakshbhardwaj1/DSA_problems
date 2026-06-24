#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(), ans.end());
        float ans1;
        if (ans.size() % 2 == 0) {
            ans1 = (ans[ans.size() / 2-1] + ans[(ans.size()/ 2)])/2.0;
        } else {
            ans1 = ans[ans.size() / 2];
        }
        return ans1;
    }
};