#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;

// O(nlogn) solution, with sorting
pair<int,int> minDifference(vector<int> a,vector<int> b){
    //Complete this method
    int min_diff = INT_MAX;
    pair<int,int> ans;

    int i, j = 0;
    
    int sa = a.size();
    int sb = b.size();

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());


    while(i < sa and j < sb){
        int v = a[i]-b[j];
        if(abs(v)<min_diff){
            min_diff = abs(v);
            ans = make_pair(a[i],b[j]);
        }

        if(v>0){
            j++;
        } else {
            i++;
        }
    }

    return ans;
}

// O(n^2) solution, no sorting
pair<int,int> minDifferenceSlow(vector<int> a,vector<int> b){
    //Complete this method
    int min_diff = INT_MAX;
    pair<int,int> ans;
    int v = 0;

    for(int i=0; i<a.size();i++){
        for(int j=0; j<b.size();j++){
            v = abs(a[i]-b[j]);
            if (v < min_diff) {
                min_diff = v;
                ans.first = a[i];
                ans.second = b[j];
            }
        }
    }

    return ans;
}

int main() {
    vector<int> array1 = {23,5,10,17,30};
    vector<int> array2 = {26,134,135,14,19};

    pair<int,int> ans = minDifference(array1, array2);

    cout<<ans.first<<" and " <<ans.second <<endl;

    return 0;
}