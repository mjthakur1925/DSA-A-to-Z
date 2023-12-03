//Brute Force Approach
/*#include<bits/stdc++.h>
using namespace std;
int missingNumber (vector<int>&a, int N){
    for (int i = 1; i <=N; i++)
    {
       int flag = 0;
       for (int j = 0; j < N-1; j++)
       {
        if(a[j] ==i ){
            flag=1;
            break;
       
       }
       
    }
    if(flag==0) return i;
    
    
}
return -1;
}
int main(){
    int N =5;
    vector<int> a={1,2,3,4};
    int ans = missingNumber(a,N);
    cout<<ans<<endl;
    return 0;

} */
//--------------------------------------------------
//Better Approach
/*#include<bits/stdc++.h>
using namespace std;
int missingNumber (vector<int>&a, int N){
     int hash[N+1]={0};
    for (int i = 0; i < N-1; i++){
        hash[a[i]]=1;
    }
    for (int i = 1; i <=N ; i++){
        if(hash[i]==0){
              return i;
        }

    }
     return -1;

}
int main(){
    int N =5;
    vector<int> a={1,2,3,4};
    int ans = missingNumber(a,N);
    cout<<ans<<endl;
    return 0;

}*/
//Time Complexity: O(N) + O(N) ~ O(2*N)
//-------------------------------------------------------
//Optimal Approach
#include<bits/stdc++.h>
using namespace std;
int missingNumber (vector<int>&a, int N){
     int sum =N*(N+1)/2;
     int s2 =0;
    for (int i = 0; i < N-1; i++){
       s2+=a[i];
    }
   
    int missingNumber = sum - s2;
    return missingNumber;

}
int main(){
    int N =5;
    vector<int> a={1,2,3,4};
    int ans = missingNumber(a,N);
    cout<<ans<<endl;
    return 0;

}