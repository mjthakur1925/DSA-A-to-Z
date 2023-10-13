#include<bits/stdc++.h>

using namespace std;
void printDivisorsOptimal(int n){
    cout<<"The Divisors of "<<n<<" are:"<<endl;

   for (  int i = 1; i <= n; i++)
   {
  if (n%i==0)
  {
  cout<<i<< " ";
  }
 
	cout << "\n";
   }
}
int main(){
		
	printDivisorsOptimal(36);
	
return 0;
}