#include <bits/stdc++.h>
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m1,m2;
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(m1[nums2[i]]){
                v.push_back(nums2[i]);
                m1[nums2[i]]--;
            }
        }
        return v;
    }
};

