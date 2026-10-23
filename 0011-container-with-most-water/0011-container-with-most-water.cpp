#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int64_t left = 0, right = height.size() -1, result = 0;
        while(left < right) {
            int64_t h = min(height[left], height[right]);
             result = max(result, h * (right - left));
            if(height[left] < height[right]) left++;
            else right--;
        }
        return result;
    }
};