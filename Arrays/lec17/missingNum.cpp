#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size()+1;
        long long actualSum = 0;
        for(int i = 0; i < arr.size(); i++){
            actualSum += arr[i];
        }
       long long expectedSum = n*(n+1)/2;
        
        return expectedSum - actualSum;
        
    }
};