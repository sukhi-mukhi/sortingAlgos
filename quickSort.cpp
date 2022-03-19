#include<iostream>
using namespace std;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

int partition(int *arr, int l, int r) {
    int pivot = arr[l];
    int start = l;
    int end = r;
    
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            swap(arr[end],arr[start]);
        }
    }
    swap(arr[l],arr[end]);
    return end;
}
void quickSort(int *array, int l, int r) {
   if(l<r){
       int loc = partition(array, l, r);
       quickSort(array,l,loc-1);
       quickSort(array,loc+1,r);
   }
}

int main() 
{
   int arr[] ={8,4,13,10,0,54,3,21,56};
   int n = sizeof(arr)/sizeof(arr[0]);
   quickSort(arr, 0, n-1);     //(n-1) for last index
   cout << "Array after Sorting: ";
   display(arr, n);
}
