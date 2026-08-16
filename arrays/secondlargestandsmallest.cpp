
// second largest element 
#include<iostream>
using namespace std;
void largest(int arr[], int n){
    int largesstindex = arr[0];
    int secondlargest = arr[0];
     for (int  i = 0; i < n; i++){
        
        if (arr[i] > largesstindex){
            secondlargest = largesstindex;
            largesstindex = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i]!=largesstindex)
        secondlargest = arr[i];
     }
     cout<<"largest element is "<<secondlargest<<endl;
    }
     
   
    int main(){
        int arr[]= { 4,6,8,9,0};
     
        int n = 5;
        sesmallest(arr,n);
        return 0;
    }


//second smallest element in the array
void sesmallest(int arr[],int n ){
    int smallest = arr[0];
    int ssmallest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }else if(arr[i] != smallest && arr[i] < ssmallest ){
            ssmallest = arr[i];
        }
    }
    cout<<"second smallest = "<< ssmallest;

}
int main(){
        int arr[]= { 4,6,8,9,0};
     
        int n = 5;
        sesmallest(arr,n);
        return 0;
    }