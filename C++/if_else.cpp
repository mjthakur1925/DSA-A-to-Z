//write a program that an inout of age and print eligible or not
/*#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin>> x;
    if(x>=19) cout<<"eligible"<<endl;
    else
    cout<< "not eligible";
    return 0;
}*/


/* A school have following numbers rules for grading system
a. beloow 25 -F
b. 25 to 44 -E
c.45 to 49 -D
d.50 to 59 -C
e.60 to 79 -B
f.80 to 100 -A
ask user to enter marks and print the corresponding grades
*/
 /*#include<bits/stdc++.h>
 using namespace std;
 int main (){
    int x;
    cin >> x;
    if (x < 25 ){
        cout << 'F';
        }
    else if(x>=25 && x<=44)
    {
        cout<< 'E';
 }
         
                 
  else if(x>=45 && x<=49)
    {
        cout<< 'D';
 }
    else if(x>=50 && x<=59)
    {
        cout<< 'C';
 }
         
    else if(x>=60 && x<=79)
    {
        cout<< 'B';
 }
         
    else if(x>=80 && x<=100)
    {
        cout<< 'A';
 }
 }*/


 /* take the age from the user and then decide accordingly
 1. if age < 18,
 print-> not eligible for job 
 2. if age >=18,
 print-> not eligible for job
  3.if age >=55 and age <=57,
 print-> not eligible for job  but retirement soon.
  4.if age >57,
 print->retirement time 
 */
#include<bits/stdc++.h>
 using namespace std;
 int main (){
    int a ;
    cin>>a;
    if (a<18)
    {
        cout<< "you are not eligible";
    }
    else if (a>=18  && a<=54)
    {
        cout<< "you are  eligible";
    }
     else if (a>=55 && a<=57)
    {
        cout<< "you are  eligible but retirement soon";
    }
     else if (a>57)
    {
        cout<< "retirement soon";
    }
    
 }
