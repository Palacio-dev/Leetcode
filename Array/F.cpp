#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> freq;
        vector<int> solution;
        for (int num: nums1){
            freq[num]++;
        }
        for (int num: nums2){
            if (freq[num] > 0){
                solution.push_back(num);
                freq[num]--;
            }
        }
        return solution;
    }
};