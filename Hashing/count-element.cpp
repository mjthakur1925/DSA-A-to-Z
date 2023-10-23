//count how many times the number appears in the array
#include<bits/stdc++.h>
using namespace std;
//Brute Force approach:
/*int countOccurances(int arr[], int n)
{
    int cnt =0;
    for (int i= 0 ;i<n;++i){
    if (arr[i]==n)
    cnt = cnt +1;
    
    }
    return cnt ;
}
    int main() {
        int n;
        cin>>n;
        int arr[]={1,2,1,3};
      cout<<countOccurances(arr,n); 
    }*/
    //TC:O(0*N)
//------------------------------------------------------------------------------
//Hashing
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    //precompute
    int hash[13]={0};
    for (int i = 0; i <n; i++)
    {
       hash[arr[i]]+=1;
    }
    
    int q;
 cin>>q;
 while(q--){
    int x;
    cin>>x;
cout<<hash[x]<<endl;
 }

return  0;
}

 