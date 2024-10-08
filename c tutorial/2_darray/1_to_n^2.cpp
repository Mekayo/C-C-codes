#include<iostream>
using namespace std;
int main(){
int m;
cout<<"number of rows :";
cin>>m;
int arr[m][m];
cout<<"Enter the element of matrix:"<<endl;
for(int i=0;i<m;i++){

    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
int minr=0;
int maxr=m-1;
int minc=0;
int maxc=m-1;
int totEl=m*m;
int count=0;
while(count<totEl){
    for(int j=minc;j<=maxc && count<totEl;j++){
        cout<<" "<<arr[minr][j];
    count++;
 }
minr++;    
if(count>=totEl){
    break;
} 
for(int i=minr;i<=maxr && count<totEl;i++){
    cout<<" "<<arr[i][maxc];
count++;
}
maxc--;
  if(count>=totEl){
    break;
} 
for(int j=maxc;j>=minc && count<totEl;j--){
    cout<<" "<<arr[maxr][j];
count++;
}
maxr--;
 if(count>=totEl){
    break;
} 
for(int i=maxr;i>=minr && count<totEl;i--){
    cout<<" "<<arr[i][minc];
count++;
}
minc++;
 if(count>=totEl){
    break;
} 

}

    return 0;
}