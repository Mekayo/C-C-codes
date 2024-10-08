#include<iostream>
using namespace std;
class factorial
{private:
int a ;
int fact;

public:
void get_input(){
    cout<<"Enter a number :";
    cin>>a;
}
void get_facto(){
    fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
}
 void result(){
cout<<"factorial is : "<<fact;
 }   
 
};
int main(){
factorial fact;
fact.get_input();
fact.get_facto();
fact.result();  
return 0;
}