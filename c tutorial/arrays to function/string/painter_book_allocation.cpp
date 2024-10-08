#include <bits/stdc++.h>
using namespace std;

bool shift(vector<int> &boards, int k, int maxTime) {
    int painterCount = 1;
    int time = 0;

    for (int i = 0; i < boards.size(); i++) {
        if (time + boards[i] > maxTime) {
            painterCount++;
            time = boards[i];
            if (painterCount > k || boards[i] > maxTime) return false;
        } else {
            time += boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k) {
    int l = *max_element(boards.begin(), boards.end());
    int h = accumulate(boards.begin(), boards.end(), 0);
    int ans = -1;

    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (shift(boards, k, mid)) {
            ans = mid;
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int k = 2; // Number of painters
    cout << "Minimum time to paint all boards: " << findLargestMinDistance(boards, k) << endl;
    return 0;
}
