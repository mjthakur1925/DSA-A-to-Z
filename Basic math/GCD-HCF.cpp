#include<bits/stdc++.h>

using namespace std;
int main()
{
   int n1,n2;
 int qcd;

   cin>>n1>>n2;
for (int i = 1;i<=min(n1,n2); i++)
{
 if (n1%i==0 &&n2%i==0)
 {
 qcd =i;
  
 }
}
cout << "The GCD of the two numbers is "<<qcd;

  
}
//tc=k min(n1,n2)