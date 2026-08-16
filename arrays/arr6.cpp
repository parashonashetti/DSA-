#include <iostream>
#include <algorithm>
using namespace std;

void leftRotate(int arr[], int n, int d) {
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};   
    int n = 5;                    
    int d = 6;  
    d=d%n;                  

    leftRotate(arr, n, d);

    cout << "Array after rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
