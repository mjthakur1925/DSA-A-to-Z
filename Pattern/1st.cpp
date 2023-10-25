/*  
  *****  
  *****  
  *****  
  *****  
  *****  
        */
       // for outer loops count the no. of  lines
       //for inner loop focus on  the no.of columns and then count then somehow to the rows
       // print them'*' inside the inner for loop
       //observe symmetry(optional)


       #include<bits/stdc++.h>
       using namespace std;
      /* int main() {
    
      
      for (int i = 0; i < 4; i++)
      {
       for ( int j = 0; j < 4; j++)
       {
        cout<<"x";
       }
       cout<<endl;
      }
      return 0;
       }*/

       //----------------------------------------------
       void print(int n){
         for (int i = 0; i < n; i++)
      {
       for ( int j = 0; j < n; j++)
       {
        cout<<"*";
       }
       cout<<endl;
      }

       }
       int main (){
        int n;
        cin>>n;
        print(n);
       }