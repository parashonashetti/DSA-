// maximum consicative once 


#include<iostream>
#include<vector>
using namespace std;
int findmaxconsicative(vector<int>a, int n ){
    int count = 0; 
    int maxi = 0; 
    for(int i =0; i <n; i++){
        if(a[i]==1){
            count++;
            maxi = max(maxi, count);
        }
        else{
            count = 0;
        }
    }
    cout<<maxi;

}
int main(){
    vector<int> a= {1,1,1,2,3,4,5,1,1,1,1,3,4};
    int n = 13;
    int result =findmaxconsicative(a, n);
    cout<<result;
}


