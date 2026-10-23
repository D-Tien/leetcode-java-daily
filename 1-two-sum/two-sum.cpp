#include <bits/stdc++.h>
using namespace std;
class Solution { 
public: 
    vector<int> twoSum(vector<int>&amp, int target) { 
        vector<int> res(2); 
        for (int i = 0; i <= amp.size() - 1; i++) { 
            for (int j = i + 1; j < amp.size(); j++) { 
                if (amp[i] + amp[j] == target) { 
                    res[0] = i; 
                    res[1] = j; 
                } 
            } 
        } 
        return res; 
    } 
}; 