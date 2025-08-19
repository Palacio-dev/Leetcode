#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size()-1; i >= 0; i--){
            digits[i]++;
            if (digits[i] == 10){
                digits[i] = 0;
                continue;
            }
            return digits;
        }
        vector<int> aux;
        aux.push_back(1);
        for (int i = 0; i < digits.size();i++){
            aux.push_back(digits[i]);
        }
        return aux;
    }
};

