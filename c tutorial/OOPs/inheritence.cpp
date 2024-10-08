#include<iostream>
using namespace std;
class parent
{
    private:
    int age;
    char name;


public:
char color;

void print(){// single inheritance


cout<<"i am on my dads colour"<<endl;

}
};
class child: public parent
{
    public:
    void print(){
        cout<<"printing the drived child class";

    }
};



int main(){
parent* top=new parent();

top->print();
 
 parent* subdiv=new parent();
 subdiv->print();

 delete top;
 delete subdiv;


    return 0;
}