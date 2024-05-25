#include<iostream>
using namespace std;

// void type of function

// void PrintName(){
//     cout << "Hi this is test example" << endl;
// }

// void parameterised function

void PrintName(string name){
    cout << "Hi "   << name << endl;
}

// return type function

int sum(int num1, int  num2){
    int sum = num1 + num2;
    return sum;
}


int main(){ 
    //  string name;
    //  cin >> name;
    //  PrintName(name);
   
    int num1, num2;
    cin >> num1 >> num2;

    int result = sum(num1, num2);
    cout << result <<endl;
    

    return 0;
}