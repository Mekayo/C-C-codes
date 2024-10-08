#include <bits/stdc++.h>
using namespace std;

bool candistribute(vector<int> &time, int n, int m, long long maxtime) {
    long long days = 1;
    long long chap = 0;
    for (int i = 0; i < n; i++) {
        if (chap + time[i] > maxtime) {
            days++;
            chap = time[i];
            if (days > m || time[i] > maxtime) return false;
        } else {
            chap += time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) {
    long long s = *max_element(time.begin(), time.end());
    long long e = accumulate(time.begin(), time.end(), 0LL);
    long long ans = -1;

    while (s <= e) {
        long long mid = s + (e - s) / 2;
        if (candistribute(time, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n = 5; // Number of chapters
    int m = 2; // Number of days
    vector<int> time = {12, 34, 67, 90, 30}; // Time for each chapter

    cout << "Minimum maximum time to complete the chapters: " << ayushGivesNinjatest(n, m, time) << endl;

    return 0;
}
