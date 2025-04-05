// addition of complex numbers 
#include<iostream>
using namespace std;

class complex{
private:

int real,img ;

public:
complex(){

}
// complex constructor call
    complex(int real,int img){
        this->real=real;
        this->img=img;
    }

    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;

    }
 
    complex operator +(complex &A){
        complex ans;
        ans.real= real + A.real;
        ans.img=img + A.img;
        return ans;
           }

};

int main(){

//calling class
complex A1(10,5);
A1.display();
complex A2(4,8);
A2.display();

complex sum=A1+A2;
sum.display();
    return 0;
}