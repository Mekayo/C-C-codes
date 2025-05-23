#include<iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        for (int a = 0; a < n; a++) {
            for (int b = a + 1; b < n; b++) {
                int c = b + 1;
                int d = n - 1;
                // two pointer
                while (c < d) {
                    long long sum = 0;
                    sum = long (nums[a]) + long   (nums[b]) + long   (nums[c]) + long   (nums[d]);
                    if (sum < target) {
                        c++;
                    } else if (sum > target) {
                        d--;
                    } else {
                        vector<int> v = {nums[a], nums[b], nums[c], nums[d]};

                        if (find(ans.begin(), ans.end(), v) == ans.end()) {
                            ans.push_back(v);
                        }

                        c++;
                        d--;
                    }
                }
            }
        }
    return ans;
    }
};
int main(){

    vector<int> nums={1000000000,1000000000,1000000000,1000000000};

Solution s;


    return 0;
}