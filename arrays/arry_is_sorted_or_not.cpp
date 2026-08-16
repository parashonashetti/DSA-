#include<iostream>
using namespace std;
void sortedornot(int arr[], int n ){
    for (int i = 0; i < n-1 ; i++){
        if(arr[i]>arr[i+1]){
            cout<<"unsorted"<<endl;
            return;
            }
           
        }
        cout<<"sorted";
        
        }
        
       
    

int main(){
        int arr[]= { 1,2,3,4,5};
     
        int n = 5;
        sortedornot(arr,n);
        return 0;
    }