//find the number that appears once and other twice



#include<iostream>
#include<vector>
using namespace std;
int findonce(vector<int>a, int n ){
    int xorr = 0;
    for(int i=0; i < n; i++){
        xorr ^= a[i];

    }
    cout<< xorr;
}
int main(){
    int n=5;
    vector<int> a = {1,1,2,2,4};
    findonce(a, n);
}


