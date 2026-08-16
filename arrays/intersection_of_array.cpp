#include<iostream>
#include<vector>
using namespace std;
vector<int> intersecrion(  vector<int> a,vector<int> b ){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> ans;
    while( i<n1 && j<n2){
        if(a[i] < b[j]){
            i++;

        }
        else if( b[j] <a[i] ){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;

}
int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {2,3,4,5};
    vector<int> result = intersecrion(a,b);
    for(int i =0 ; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
}