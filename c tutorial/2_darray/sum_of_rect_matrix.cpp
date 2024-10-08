#include<iostream>
using namespace  std;
int main(){
    int r;
    cout<<"Enter the number of rows:";
    cin>>r;
    int c;
    cout<<"Enter the number of col:";
    cin>>c;
    
int a[r][c];
cout<<"Enter the elements of matrix a:";
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
cin>>a[i][j];
}
cout<<endl;
}
cout<<"matrix A:"<<endl;
for(int i=0;i<r-1;i++){
for(int j=1;j<c-1;j++){
cout<<" "<<a[i][j];
}
cout<<endl;
}
int sum=0;
for(int i=0;i<r-1;i++){
    for(int j=1;j<c-1;j++){
         sum+=a[i][j];
    }
}
cout<<"sum of elements of the matrix is:"<<sum;

    return 0;
}