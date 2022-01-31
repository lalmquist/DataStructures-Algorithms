#include<iostream>
#include<vector>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

//str is the input the string
string compressString(const string &str){   
    //complete the function to return output string
    char currChar;
    int currCount;
    string output;

    if (str.length() > 0){
        currChar = str[0];
        currCount = 1;
    } else {
        return "";
    }

    for(int i=1;i<str.length();i++){
        if (currChar != str[i]){
            output += currChar + to_string(currCount);
            currChar = str[i];
            currCount = 1;
        } else {
            currCount ++;
        }
    }

    output += currChar + to_string(currCount);

    if (str.length() > output.length()) {
        return output;
    } else {
        return str;
    }
    
}

int main() {

    string ans;

    ans = compressString("aaaaabc");

    cout<<ans <<endl;

    return 0;
}