#include<iostream>
using namespace std;
class rectangle
{public:
int length;
int breadth;
 
 int area(){
    return length*breadth;

 }
 int perimeter(){
    return 2*(length+breadth);
 }

};

int main(){

rectangle r1;
r1.length=5;
r1.breadth=3;
cout<<r1.area()<<endl;
rectangle r2;
r2.length=10;
r2.breadth=15;
cout<<r2.area()<<endl;
    return 0;
}