   // better Approach
    //SORTING
    //Time Complexity: O(2N)
#include<bits/stdc++.h>
using namespace std;
/*int main (){
 int arr[] = {2,5,1,3,0};
  int n = 5;
   
    int largest = arr[0];
    int second = -1;
    for(int i=0;i <n;++i){
     if(arr[i]> largest){
     largest = arr[i];
     }
    }
      for(int i=0;i <n;++i){
  if (arr[i]>second && arr[i]!=largest)
 {
   second=arr[i];
 }
 
    }
      cout << "The second  largest element in the array is: " <<second << endl;
      return 0;
    }*/
//------------------------------------------------------------

//Optimized approach 
// Time complexity : O(log N)
// Space complexity : O(1)
int secondLargest(vector<int>&a, int n)  {
    int largest = a[0];
    int slargest =-1;
    for (int i = 1; i <n; i++)
    {
       if (a[i]>largest)

       {
       slargest =largest;
       largest = a[i];
       }
       
    else if ( a[i]< largest && a[i]> slargest){
        slargest = a[i];
    }

}
return slargest;
}
int secondSmallest(vector<int>&a, int n)  {
    int smallest = a[0];
    int ssmallest =INT_MAX;
    for (int i = 1; i <n; i++)
    {
       if (a[i]<smallest)

       {
     ssmallest =smallest;
       smallest = a[i];
       }
       
    else if ( a[i]!=smallest && a[i]<ssmallest){
        ssmallest = a[i];
    }

}
return ssmallest;
}
void getsecondOrderElements(int n, vector<int> &a) {
    int sLargest = secondLargest(a, n);
    int sSmallest = secondSmallest(a, n);
    cout << "Second smallest is " << sSmallest << endl;
    cout << "Second largest is " << sLargest << endl;
}

int main() {
    vector<int> a = {1, 4, 3, 5, 2, 7, 6};
    int n = a.size();
    getsecondOrderElements(n, a);
    return 0;
}

