#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    vector<int> nums;
    string line;
    getline(cin, line);
    stringstream ss(line);
    int num;
    while (ss >> num){
        nums.push_back(num);
    }
    cin >> k;
    int tam = nums.size();
    int vet[tam];
    for (int i = 0;i < tam; i++){
        int pos_certa;
        if ((i + k )>= tam){
            pos_certa = (i + k) % tam;
            vet[pos_certa] = nums[i];
            continue;;
        }
        vet[i+k] = nums[i];
    }
    cout << "[";
    for (int i = 0; i < tam; i++){
        if (i == tam -1){
            cout << vet[i];
        }
        cout << vet[i] << ",";
    }
    cout << "]";
    cout << endl;
}