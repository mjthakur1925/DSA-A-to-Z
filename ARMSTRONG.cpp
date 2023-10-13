#include<bits/stdc++.h>

using namespace std;
int main()
{
   int n;
   cin>>n;
     int sum = 0;
int dup =n;
   
      while( n !=0 ) 
   {
      int x = n % 10;
     sum= sum + (x*x*x) ;
      n= n/10;
   }
if (sum==dup)
{
   cout<<"yes";
}
else cout <<"no";
  //cout<< reverseNO;
}