#include<iostream>
using namespace std;
void swapping(int &a, int &b) {     //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void merge(int *arr, int l, int m, int r) {
    int x=l;
    int y=m+1;
    int k=l;
    int b[9]={};
    
    while(x<=m && y<=r){
        if(arr[x]<arr[y]){
            b[k]=arr[x];
            x++;
        }else{
            b[k]=arr[y];
            y++;
        }
        k++;
    }
    
    while(x<=m){
        b[k]=arr[x];
        x++;k++;
    }
    
    while(y<=r){
        b[k]=arr[y];
        y++;k++;
    }
    
    for(int i=l;i<=r;i++){
        arr[i]=b[i];
    }
}
void mergeSort(int *array, int l, int r) {
   //Practise Yourself : Write your code Here
   if(l<r){
       int mid=(l+r)/2;
       mergeSort(array,l,mid);
       mergeSort(array,mid+1,r);
       merge(array,l,mid,r);
   }
   
}
int main() {
   int arr[] ={8,4,13,10,0,54,3,21,56};
   int n = sizeof(arr)/sizeof(arr[0]);
   mergeSort(arr, 0, n-1);     //(n-1) for last index
   cout << "Array after Sorting: ";
   display(arr, n);
}
