#include<iostream>
using namespace std;

void doSomething(string &s){
    s[0] = 't';
    cout <<s<<endl;
}


int main(){
  
   string s = "east";
   doSomething(s);
   cout <<s<<endl;



    return 0;
}