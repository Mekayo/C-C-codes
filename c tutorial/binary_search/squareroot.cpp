#include<iostream>
using namespace std;
long long int floorSqrt(int n)
{
     int s=0;
     int e=n;
     long long int mid=s+(e-s)/2;
     int ans=-1;
     while(s<=e){
        long long int square=mid * mid;
         if( square==n){
             
             return mid;
         }
         if ( square > n) {
             e = mid - 1;
         }
         else{
             ans=mid;
             s=mid+1;
         }
         mid=s+(e-s)/2;
     }return ans;  
}
/** for float value in presice numbers 0.000001 */
double presise_ans(int num,int presision,int tempsol){

double factor=1;
double ans=tempsol;
for(int i=0;i<presision;i++){
    factor=factor/10;
    for(double j=ans;j*j<num;j=j+factor){
        ans=j;
    }
}
return ans;
}

int main(){

int num;
cout<<"Enter the numeber:";
cin>>num;

int tempsol=floorSqrt(num);
cout<<"Answer is :"<<presise_ans(num,5,tempsol)<<endl;

return 0;
} 