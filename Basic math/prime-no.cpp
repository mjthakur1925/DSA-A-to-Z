#include<bits/stdc++.h>

using namespace std;
int main()
{
   int n;
 int cont =0;

   cin>>n;
for (int i = 1;i *i<=n; i++)
{
 if (n%i==0)
 {
  cont++;
  if ((n/i)!=i)
 cont++;
  
 }
}

   if (cont==2)
   
     cout<<"prime no";
   
   else 
   cout<<"not a prime no";
    

  
}
// tc = o(squrt(n))