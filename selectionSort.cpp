#include <iostream>
using namespace std;

// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


//selection sort
void selectionSort(int array[], int size) {
  for(int step=0;step<size-1;step++){
      int min_idx=step;
        for(int i=step+1;i<size;i++){
            if(array[i]<array[min_idx]){
                min_idx=i;
            }
        }
        swap(&array[step],&array[min_idx]);
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
    selectionSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
