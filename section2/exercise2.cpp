#include<iostream>
#include<vector>
#include<unordered_set>
#include<climits>
using namespace std;

int maxSubarraySum(vector<int> arr){
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();

    int max_sum;
    int current;

    current = 0;
    max_sum = INT_MIN;

    for(int i=0;i<n;i++){
        current += arr[i];
        if (current > max_sum) {
            max_sum = current;
        }

        if (current < 0){
            current = 0;
        }
    }

    if (max_sum < 0) {
        return 0;
    }

    return max_sum;
}

int main() {
    vector<int> testCase = {-1,2,3,4,-2,6,-8,3};

    cout << maxSubarraySum(testCase) << endl;

    return 0;
}