// sum of matrix using only teo array 

#include<iostream>
using namespace  std;
int main(){
int a[3][3],b[3][3],c[3][3]={0,0,0,0,0,0,0,0,0};//add variable c[3][3]
cout<<"Enter the elements of matrix a:";
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
cin>>a[i][j];
}
cout<<endl;
}
cout<<"Enter the elements of matrix b:";
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
cin>>b[i][j];
}
cout<<endl;
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){

 c[i][j]=a[i][k]*b[k][j]+c[i][j];
        }
        
    }
}
cout<<"sum of matrix is:"<<endl;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
cout<<" "<<c[i][j];//third variable put c[i][j]
}
cout<<endl;
}

    return 0;
}