#include<iostream>
using namespace std;

/*
  * * * * *
  * * * *
  * * *
  * *
  * 

*/
void printPattern5(int n){
    
      for(int i = 0;i<n;i++){
         
         for(int j=1;j<n-i+1;j++){
            cout << "*" << "";
         }

         cout <<endl;
        

      }

}

int main(){
     
     int n;
     cin >> n;

     printPattern5(n);



    return 0;
}