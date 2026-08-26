 #include <iostream>
#include <vector>
using namespace std;

void meow(vector<int>& zero, vector<int>& one,int ind, vector<int>& ans) {

    int n = zero.size();

    if (ind == n) {
        for (int x : ans) {
            cout << x;
        }
        cout << endl;
        return;
    }
    ans.push_back(zero[ind]);
    meow(zero, one, ind + 1, ans);
    ans.pop_back();

    // Choose 1
    ans.push_back(one[ind]);
    meow(zero, one, ind + 1, ans);
    ans.pop_back();
}

int main() {
    vector<int> zero = {0, 0, 0};
    vector<int> one = {1, 1, 1};

    vector<int> ans;

    meow(zero, one, 0, ans);

    return 0;
}