#include<iostream>
using namespace std;

void printPattern2(int n){
  
   for(int i =0;i<n;i++){
    
     for(int j =0;j<=i;j++){

        cout << "*";
     }
     cout <<endl;

   }

}
int main(){
 /*
   *
   * *
   * * *
   * * * *
 
 */
  
  int n;
  cin >> n;
  printPattern2(n);

}