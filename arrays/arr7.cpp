// remove the duplicate elements from the array

#include<iostream>
using namespace std;
int  removeduplicate(int arr[], int n)
{
    int i = 0;
    for(int j = 1; j < n; j++)
    {
        if( arr[i]!= arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }

    return i+1;

}
int main(){
        int arr[]= { 1,1,2,2,6,6,5,8,8,8,8};
     
        int n = 11;
        int newsize = removeduplicate(arr,n);
        for (int i = 0; i < newsize; i++)
        {
         cout<<arr[i]<<" ";
        }
        
        return 0;
    }
