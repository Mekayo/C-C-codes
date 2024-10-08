#include<iostream>
using namespace std;
int main(){
 int r;
 cout<<"enter the no of rows:";
 cin>>r;
int c;
cout<<"Enter the no of coln:";
cin>>c;
int arr[r][c];
cout<<"enter the elements:"<<endl;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
 
}
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        cout<<" "<<arr[j][i];
    }
  cout<<endl;  
}


    return 0;
}