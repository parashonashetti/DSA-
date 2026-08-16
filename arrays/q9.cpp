//move all zeros to end of the array

#include<iostream>
using namespace std;
void movezero(int arr[], int n){
    int j = -1;
    for(int i = 0; i < n; i++ ){ 
        if(arr[i] == 0){
            j = i ;
            break;
        }
    }if( j == -1){
        return; 
    }
    for(int i = j+1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }

    }
    

}
int main(){
    int n;
    cout<<"enter the size of the array = ";
    cin>>n;
    int arr[n];
    cout<<"enter a array elements = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    movezero(arr, n);
    for(int i =0 ; i< n; i++ ){
    cout<<arr[i]<<" ";
    }


}
