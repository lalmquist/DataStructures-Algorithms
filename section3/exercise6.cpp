#include<iostream>
#include<vector>
#include<unordered_set>
#include<bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big,string small){
    //store the occurrences in the result vector
    vector<int> result = {};
    int strStart = -1;
    int index = 0;

    while(index!=-1){
        index = big.find(small,strStart+1);
        strStart = index;
        if (index!=-1){
            result.push_back(index);
        }
    }

    return result;
}

int main() {
    string bigString = "I liked the movie, acting in movie was great!";
    string smallString = "movie";

    vector<int> ret = stringSearch(bigString, smallString);
    for(auto x : ret){
        cout<< x<< "," <<endl;
    }

    return 0;
}