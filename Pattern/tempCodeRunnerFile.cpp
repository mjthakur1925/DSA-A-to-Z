/*
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************
*/
 
 
 #include<bits/stdc++.h>
       using namespace std;
 void print(int n){
   int inis =0;
         for (int i = 0; i < n; i++)
      {
     for ( int j = 1; j <=n-i; j++)
       {
        cout<< "*";
     
       }
        for ( int j = 0; j <inis; j++)
       {
        cout<< "  ";
     
       }
       
   for (  int j = 1; j <= n-i; j++)
    {
        cout<<"*";
    }
      
     
     inis +=2;
       cout<<endl;

        }
 }
       int main (){
        int n;
        cin>>n;
        print(n);
       }