#include<iostream>
#include<vector>
#include<cstring>
#include<string>
using namespace std;

string convert_to_digital_time(int minutes){
    //complete this function

    int hours;
    int mins;

    hours = minutes / 60;
    mins = minutes % 60;

    string ans;
    if (mins < 10) {
        ans = to_string(hours) + ":0" + to_string(mins);
    } else {
        ans = to_string(hours) + ":" + to_string(mins);
    }
    

    return ans;
}

int main() {
    string ans;

    ans = convert_to_digital_time(1180);

    cout<<ans <<endl;

    return 0;
}