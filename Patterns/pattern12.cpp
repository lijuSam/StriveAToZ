#include<iostream>
using namespace std;
/*
  1
  0 1
  1 0 1
  0 1 0 1
  1 0 1 0

  here outer loop will be till n 
  inner loop till <= row 

  for printing we can find the pattern if it's  if it's even row it start with 1 and odd row it start with 0

  for fliping we can do 1- star

*/

void printPattern12(int n){
    int start = 1;

    for(int i = 1;i<n;i++){
      
      if(i%2 == 0){
        start = 1;
      }
      else{
        start = 0;
      }

      for(int j = 1;j<=i;j++){
         
         cout << start;
         start = 1- start;

      }
      cout <<endl;


    }
   
    



}


int main(){
    int n;
    cin >> n;
    printPattern12(n);

}