/*
1
01
101
0101
10101
*/       #include<bits/stdc++.h>
       using namespace std;
 void print(int n){
         for (int i = 0; i < n; i++)
      {
       int stars=1;
       if(i%2==0) stars = 1;
       else stars =0;
    
    for ( int j = 0; j <= i; j++)
       {
        cout<< stars;
        stars =1-stars;
       }
       cout<<endl;
      }
        }
       int main (){
        int n;
        cin>>n;
        print(n);
       }
