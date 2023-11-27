//optimal approch
//TC: O(N)

/*#include<bits/stdc++.h>
using namespace std;
int main (){
 int arr[] = {2,5,1,3,0};
  int n = 5;
   
    int largest = arr[0];
    for(int i=0;i <n;++i){
     if(arr[i]> largest){
     largest = arr[i];
     cout << "The largest element in the array is: " << largest << endl;
 
}
    }
    return 0;
    }*/
    //------------------------------------------------------------------------------------------------
    //Brute Force Approach
    //SORTING
    //Time Complexity: O(N*log(N))
#include<bits/stdc++.h>
using namespace std;
 
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2);
   
    return 0;
}
