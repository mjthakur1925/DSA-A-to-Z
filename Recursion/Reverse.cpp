#include<bits/stdc++.h>
using namespace std;
// swap n array
//1. recursion
/*void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
void reverseArray( int arr[], int l, int r){
    if (l<r){
    
    swap(arr[l],arr[r]);
   reverseArray( arr, l+1,r-1);
}
}
int main (){
      int n = 5;
    int arr[] ={ 1,2,3,4,5};
reverseArray(arr,0,n-1);
 printArray(arr, n);
 return 0; 
}*/
//------------------------------------------------------------------------

//2nd is functions
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
void reverseArray( int i,int arr[],int n){
    if (i>=n/2){
    return ;
   
}
 swap(arr[i],arr[n-i-1]);
   reverseArray(i+1,arr,n);
}
int main (){
      int n = 5;
    int arr[] ={ 1,2,3,4,5};
reverseArray(0, arr,n);
 printArray(arr, n);
 return 0; 
}