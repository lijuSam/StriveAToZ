#include<iostream>
using namespace std;


int main(){
  
    string s = "Liju";
    int len = s.size();
    
    s[len-1] = 'i';

    cout <<s[len-1];



}