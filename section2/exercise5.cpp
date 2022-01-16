#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;

bool compare(pair<int,int> v1, pair<int,int> v2){
    return v1.second < v2.second;
}

int countActivites(vector<pair<int,int> > activities){
    //Complete this method
    int ans = 1;
    int j = 0;
    sort(activities.begin(),activities.end(),compare);

    for(int i=1;i<activities.size();i++){
        if (activities[i].first >= activities[j].second) {
            ans += 1;
            j = i;
        }
    }
    
    return ans;
}


int main() {
    vector<pair<int,int>> array1 = {{7,9},{0,10},{4,5},{8,9},{4,10},{5,7}};

    int ans = countActivites(array1);

    cout << ans << endl;

    return 0;
}