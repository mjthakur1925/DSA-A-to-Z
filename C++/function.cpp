#include<bits/stdc++.h>
using namespace std;
//function are set of code which performs something for you
//function are used to modularies code
//function are used to increase readibility
// function are used to use same code multiple times
// void --> which does not return anything
/*void printHello(){
    cout<<"hello";
}
int main() {
    printHello();
    return 0;
    
}*/
//-----------------------------------------//
// return

//take two numbers and print its sum

int sum(int num1, int num2){
    int num3= num1 + num2;
    return (num3); // this is called as a retrun statement. it returns the value of variable num3
}
int main(){
    int num1,num2;
    cin >> num1>> num2;
    int res = sum(num1,num2);
    cout<< res;
    return 0;
}




//parameterised
// non paremeterised
