#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    //pre-compute
    map<int,int>map;
    for (int i = 0; i <n; i++)
    {
      map[arr[i]]++;
    }
    for(auto it : map){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    int q;
cin>>q;
while(q--)
{
    int num;
    cin>>num;
    cout<<map[num]<<endl;
}
    return 0;
    
}


