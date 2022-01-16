#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;

//Expected Complexity O(N)
vector<int> productArray(vector<int> arr){    
    //Create an output Array
    int n = arr.size();
    vector<int> output(n,1);
    
    //update the output array and return
    //complete the code
    vector<int> left(n,0);
    vector<int> right(n,0);

    // init ends of arrays
    left[0] = 1;
    right[n-1] = 1;

    for(int i=1;i<n;i++){
        left[i] = left[i-1] * arr[i-1];
    }
    for(int i=n-2;i>=0;i--){
        right[i] = right[i+1] * arr[i+1];
    }

    for(int i=0;i<n;i++){
        output[i] = left[i] * right[i];
    }

    return output;
}


int main() {
    vector<int> array1 = {1,2,3,4,5};

    vector<int> ans = productArray(array1);

    for( int y : ans ) {
        cout << y << " ";
    }
    cout << endl;



    return 0;
}