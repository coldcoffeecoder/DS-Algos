#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[5] = {3, 5, 1, 9, 4};
    
    //max value
    int ans = INT_MIN;

    for(int i = 0; i < 5; i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    cout << ans;
    return 0;
}