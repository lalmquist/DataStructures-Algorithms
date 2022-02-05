#include<iostream>
using namespace std;

int countWays(int size, int n){
    // base case
    if(n<0){
        return 0;
    }

    if(n==0){
        return 1;
    }

    int sum=0;
    for(int i=1;i<=size;i++){
        sum += countWays(size,n-i);
    }

    return sum;
}


int main() {
    int n ;
    cin>>n;

    cout<<countWays(3, n)<<endl;

    return 0;
}