#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    string line;
    getline(cin, line); // Lê a linha inteira
    stringstream ss(line);
    int num;
    while (ss >> num) {
        nums.push_back(num);
    }
    int aux = nums[0];
    for (int i = 1; i < nums.size();){
        if (nums[i] == aux){
            nums.erase(nums.begin() + i);
            continue;
        }
        aux = nums[i];
        i++;
    }
    cout << nums.size() << endl;;
}
