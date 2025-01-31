// merging an array first split an array into subarrays of odds and even the merge in different array as in same order of Array A passed
#include<iostream>
#include<vector>
using namespace std;

void sol(vector<int> A,int n){
    // creating an vector and assigning value of -1 in the array
    vector<int> b;
     b.assign(n,-1); // for odds
    vector<int> c; 
    c.assign(n,-1);// for evens
    vector<int> d; 
    d.assign(n,-1);

    for(int i=0;i<n;i++){
    if(A[i]%2==0){
    c[i]=A[i];
    }
     else{
        b[i]=A[i];
       }
    }
    // now merge in vector d
    for(int a=0;a<n;a++){
        if(b[a]!=-1){
        d[a]=b[a];
    }
    else if(c[a]!=-1){
        d[a]=c[a];
    }

    //merged
    for(int m=0;m<n;m++){
        cout<<d[m]<<" "<<endl;
        }

    }

}

int main(){

    vector<int> A={1,2,3,4,5,6};
    int n=A.size();

    //calling and function 
    sol(A,n);


    return 0;
}