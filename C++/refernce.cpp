#include<bits/stdc++.h>
using namespace std;
//pass by value
/*void dosomething(int num){
    cout<< num<< endl;
    num +=5;  
    cout<< num<< endl;
    num +=5;
  cout<< num<< endl;
}
int main() {
    int num = 10;
    dosomething(num);
    cout<< num <<endl;

    return 0;
}*/
//------------------------------>
//pass by reference
void dosomething(int &num){ //reference is a pointer to the variable, so it can be used in functions as well.
 cout<< num<< endl;
    num +=5;  
    cout<< num<< endl;
    num +=5;
  cout<< num<< endl;
}
int main() {
    int num = 10;
    dosomething(num);
    cout<< num <<endl;

    return 0;
}
//array always go with pass by reference