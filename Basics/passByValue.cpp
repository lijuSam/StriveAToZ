#include<iostream>
using namespace std;

// Pass By Value

void doSomething(int num){

   cout << num <<endl;
   num +=5;
   cout << num <<endl;
   num+=10;
   cout << num <<endl;     



}

int main(){
 int sum = 10;
 doSomething(sum);

 cout << sum << endl;
 

}