#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> dis(nums.begin(),nums.end());
        return dis.size() < nums.size();
    }
};
