#include<bits/stdc++.h>
using namespace std;

// print name 5 times;
/*void name(int i,int n){
    
    
    if (i>n){
   return ;
}
 cout<<"RAJAT"<<endl;
    
    name(i+1,n);
}
int main() {
    int n;
    cin>>n;
  name(1,n);
}*/
// TC: O(n)
//--------------------------------------------

// print linearlly from 1 to n
    
    
   /* void name(int i,int n){
    
    
    if (i>n){
   return ;
}
 cout<<i<<endl;
    
    name(i+1,n);
}
int main() {
    int n;
    cin>>n;
  name(1,n);
}*/
//-------------------------------------------------
//print linearlly from n to 1
/*void name(int i,int n){
    
    
    if (i<1){
   return ;
}
 cout<<i<<endl;
    
    name(i-1,n);
}
int main() {
    int n;
    cin>>n;
  name(n,n);
}*/
//-------------------------------------------------------
//print linearlly from n to 1(by backtracking)

/*void name(int i,int n){
    
    
    if (i<1){
   return ;
}
 name(i-1,n);

 cout<<i<<endl;
    
   
}
int main() {
    int n;
    cin>>n;
  name(n,n);
}*/
//---------------------------------------------------------------------
//print linearlly from n to 1(by backtracking)
void name(int i,int n){
    
    
    if (i>n){
   return ;
}
 name(i+1,n);
 cout<<i<<endl;
    
   
}
int main() {
    int n;
    cin>>n;
  name(1,n);
}
