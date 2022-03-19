#include <iostream>
using namespace std;

//bubble sort
void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                swap(arr[i],arr[j]);
            }
        }
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
    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}

//output
//Sorted array: 
//10 20 40 50 60 60 70 80 90 54567
