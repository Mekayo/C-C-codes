#include<iostream>
using namespace std;
int main(){

int a=25;
int *ptr=&a;
cout<<"address is :"<< ptr<<endl;
cout<<"value is :"<< *ptr<<endl;
cout<<"size of pointer is :"<< sizeof(ptr)<<endl;


int *q=ptr;
cout<<*q<<"_"<<q<<endl;
cout<<*q<<"_"<<*q<<endl;

    return 0;
}