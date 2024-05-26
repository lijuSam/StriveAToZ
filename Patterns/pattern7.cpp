#include<iostream>
using namespace std;

/*
      *
    * * *
  * * * * * 
* * * * * * *
 We can observe that we are printing space  *  and space 

 for space what we are doing n-i-1

 for star we are doing 2*i+1 (  1 , 3 ,5 ,7) common pattern in programming


*/

void printPattern7(int n){
    
    for(int i = 0;i<n;i++){
     // for space

     for(int j = 0;j<n-i-1;j++){
        cout << " " ;
     }

     // for star

     for(int j =0;j<2*i+1;j++){
        cout <<"*";
     }

     // for space

     for(int j =0;j<n-i-1;j++){
      cout << " ";
     }
    
     cout <<endl;
    
    }
   

}


int main(){
       
        int n;
        cin >> n;

        printPattern7(n);



    return 0;
}