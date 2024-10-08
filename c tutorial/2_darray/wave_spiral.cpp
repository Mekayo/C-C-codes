#include<iostream>
using namespace std;
int main(){
int m;
cout<<"number of rows :";
cin>>m;
int n;
cout<<"number of colns:";
cin>>n;
int arr[m][n];
cout<<"Enter the element of matrix:"<<endl;
for(int i=0;i<m;i++){

    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
int minr=0;
int maxr=m-1;
int minc=0;
int maxc=n-1;
int totEl=m*n;
int count=0;
while(count<totEl){
    for(int j=minc;j<=maxc && count<totEl;j++){
        cout<<" "<<arr[minr][j];
    count++;
 }
minr++;    
 
for(int i=minr;i<=maxr && count<totEl;i++){
    cout<<" "<<arr[i][maxc];
count++;
}
maxc--;
 
for(int j=maxc;j>=minc && count<totEl;j--){
    cout<<" "<<arr[maxr][j];
count++;
}
maxr--;

for(int i=maxr;i>=minr && count<totEl;i--){
    cout<<" "<<arr[i][minc];
count++;
}
minc++; 
}

    return 0;
}