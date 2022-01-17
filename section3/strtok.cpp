#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(){

    char input[1000];
    cin.getline(input,1000);

    //strtok()
    char *token = strtok(input," ");
    cout<<token <<endl;
    while (token!=NULL){
        token = strtok(NULL," ");
        cout<<token;
    }

    return 0;
}