#include <iostream>
using namespace std;
int  main() {
    int i;
    int  marks[5] = {12,23,54,76,67};
    int n = 5;
    int temp=marks[0];
  for(i=1;i<n;i++)
  {
    marks[i-1]=marks[i];

  }
  marks[n-1]=temp;
  for (i = 0; i < n; i++) {
    cout << marks[i] << " ";
  }
  cout << endl;
  return 0;

}


