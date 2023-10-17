#include<bits/stdc++.h>

using namespace std;
int main()
{
   int n;
   cin>>n;
     int reverseNO = 0;

   
      while( n !=0 ) 
   {
      int x = n % 10;
      reverseNO =(reverseNO *10) + x;
      n= n/10;
   }

  cout<< reverseNO;
}



