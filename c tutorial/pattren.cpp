#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number of stars:";
cin>>n;
for (int i = 1; i <= n; i++) {
    for (int j = n; j > i; j--) {
        cout << " "; // Print spaces
    }
    for (int j = 1; j <= (2 * i - 1); j++) {
      
      if(  j=(2*i-1)||i==n){
   
        cout << "*"; // Print stars
      }
      else{
        cout<<" ";
      }
    }
    cout << endl;
}



// // Lower part
// for (int i = n-1; i >= 1; i--) {
//     for (int j = n; j > i; j--) {
//         cout << " "; // Print spaces
//     }
//     for (int j = 1; j <= (2 * i - 1); j++) {
//         cout << "*"; // Print stars
//     }
//     cout << endl;
// }
return 0;
}