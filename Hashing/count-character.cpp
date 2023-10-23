#include<bits/stdc++.h>
using namespace std;
//Brute Force approach:
/*int countOccurances(char c, string s)
{
    int cnt =0;
    for (int i= 0 ;i<s.length();++i){
    if (s[i]==c)
    cnt = cnt +1;
    
    }
    return cnt ;
}
    int main() {
          char c;
    cin >> c;
   string s ="abbab";
       
       cout<<countOccurances(c,s)<<endl;
      return 0;
    }*/



    //----------------------------------------------------------------


//Hashing


// <<<<<<<<-----------for lowercase------------>>>>>>>>>>>>>>>>>>


/*int main(){
    string s;
      cin >> s;
    //precompute
    int hash[26]={0};
    for (int i = 0; i <s.size(); i++)
    {
       hash[s[i]-'a']++;
    }
    
    int q;
 cin>>q;
 while(q--){
    char c;
    cin>>c;
cout<<hash[c-'a']<<endl;
 }

return  0;
}*/



//<<<<<<<-------------for uppercase------------>>>>>>>>>>>>>>>>>>>>>>>>>
int main(){
    string s;
      cin >> s;
    //precompute
    int hash[256]={0};
    for (int i = 0; i <s.size(); i++)
    {
       hash[s[i]]++;
    }
    
    int q;
 cin>>q;
 while(q--){
    char c;
    cin>>c;
cout<<hash[c]<<endl;
 }

return  0;
}
