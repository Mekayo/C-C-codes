#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n = arr.size();
        int m = arr[0].size();
        int maxCount = 0;  // To store the maximum count of 1s
        int rowIndex = -1;  // To store the index of the row with the most 1s

        for (int i = 0; i < n; i++) {
            // Perform binary search to find the first 1 in the row
            int low = 0, high = m - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[i][mid] == 1) {
                    // If we find a 1, move to the left to find the first occurrence
                    high = mid - 1;
                } else {
                    // If it's 0, move to the right
                    low = mid + 1;
                }
            }
            // After binary search, 'low' will point to the first occurrence of 1 in the row
            int countOfOnes = m - low;
            if (countOfOnes > maxCount) {
                maxCount = countOfOnes;
                rowIndex = i;
            }
        }

        return rowIndex;
    
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}