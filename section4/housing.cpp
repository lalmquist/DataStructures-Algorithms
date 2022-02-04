#include<iostream>
using namespace std;

void housing(int *arr, int n, int k) {

    int i = 0;
    int j = 0;
    int cs = 0;

    //shortest
    int si = 0;
    int sj = 0;
    int shortest = INT_MAX;

    while(j<n){

        //expand to right
        cs += arr[j];
        j++;

        // remove elements from left till cs > sum and i < j
        while(cs > k and i<j){
            cs = cs - arr[i];
            i++;
        }

        // check if any given point
        if(cs==k){
            if ((j-i-1) < shortest) {
                si = i;
                sj = j-1;
                shortest = i-j-1;
            }
        }
    }
    cout<<si<<" - "<<sj <<endl;
    return;
}

int main() {

    int plots[] = {1,3,2,1,4,1,3,2,1,1};
    int n = sizeof(plots)/sizeof(int);
    int k = 8;

    housing(plots,n,k);
    
    return 0;
}