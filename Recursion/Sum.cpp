#include<bits/stdc++.h>
using namespace std;
// sum of first n number 
//1. Parameterisedk
/*void fun( int i,int sum){
    if (i<1){
        cout<<sum<<endl;
    return;
    }
  
    fun(i-1,sum+i);

}
int main(){
    int n;
    cin>>n;
    fun(n,0);
    return 0;
}*/
//------------------------------------------------------------------------------
//2.functional
int func( int n){ 
   
    if (n==0){
     
    return 0;
    }
  
    return n + func(n-1);
     
}
int main(){
    int n;
    cin>>n;
    cout<<func(n)<<endl;
  return 0;

  
}