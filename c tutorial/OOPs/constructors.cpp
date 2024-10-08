#include<iostream>
using namespace std;
class Rectangle{
private:
int length;
int breadth;
public:
// non parameterized construstor
Rectangle(){
    length=0;
    breadth=0;
}
// parameterized construstor
Rectangle(int l,int b){
    setdata(l,b);
}

//copy construstors
Rectangle(Rectangle &rect){
    length=rect.length;
    breadth=rect.breadth;
}

void setdata(int l,int b){
    if(l>=0&&b>=0){    
    length=l;
    breadth=b;}
     else
     {
     length=0;
    breadth=0;   
     }

}
int area(){
return length*breadth;
}
int perimeter(){
    return 2*(length+breadth);
}

};
int main(){
    Rectangle r1(10,5);
Rectangle r2(r1);
    cout<<r2.area()<<endl;
    return 0;
}