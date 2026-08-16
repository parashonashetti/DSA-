//left rorate an array 


// #include<iostream>
// using namespace std;
// int leftrotate(int arr[], int n)
// {
//     int temp = arr[0];
//     for(int i = 1; i < n; i++)
//     {
//        arr[i-1] = arr[i];
       

//    }
//     arr[n-1] = temp;
   
  
// }
// int main(){
//         int arr[]= { 1,2,3,4};
     
//         int n = 4;
//         leftrotate(arr, n);
//         for (int i = 0; i < n; i++)
//         {
//          cout<<arr[i]<<" ";
//         }
        
//         return 0;
//     }



    //lest rotate a array by d position d=3

#include<iostream>
using namespace std;
int reverse(int arr[], int start, int end){
      while (start < end )
      {
        swap(arr[start],arr[end]);
        start++;
        end--;
      }
      
}
void leftrotate(int arr[], int n , int d){
    reverse(arr , 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr , 0, n-1);
}
int main(){
        int d,n;
        cout<< " enter size of the array = ";
        cin>>n;
        int arr[n];
        cout<< " enter array elements "<<endl;
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }
        cout<<" enter no rotation = ";
        cin>>d;
        d = d%n;
        
        leftrotate(arr, n, d);
        for (int i = 0; i < n; i++)
        {
         cout<<arr[i]<<" ";
        }
        
        return 0;
    }

