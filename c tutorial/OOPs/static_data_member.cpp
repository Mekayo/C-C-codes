#include<iostream>
using namespace std;


class static_data_member
{
private:
 int num2;
   static int num1;
public:
    static_data_member(int b){
        num2=b;
        num1++;
    }

  void display(){
    cout<<num1 <<". "<<num2<<endl;
  }

};

int static_data_member::num1=0;

 int main(){

static_data_member A1(51);
A1.display();
static_data_member A2(20);
A2.display();


    return 0;
 }
