/******************************************************************************

//insertionSort

*******************************************************************************/
#include <iostream>

using namespace std;

void insertionSort(int arr[], int size) {
  
  for(int i=1;i<size;i++){
      
      int temp=arr[i];
      int j=i-1;
      
      while(j>=0 && arr[j]>temp){
          arr[j+1]=arr[j];
          j--;
      }
      arr[j+1]=temp;
  }
  
}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{
    int arr[] = { 60, 10, 20, 90, 80, 70, 54567, 60, 50, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
