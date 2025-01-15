//runtime polymorphism 
#include<iostream>
using namespace std;

class Animal{
public:


    virtual void speak()
    {
        cout<<"AAAooooooooooooo!!!"<<endl;

    }
};
class dog : public Animal{
     
     public:
        void speak()
            {
                cout<<"bahu bahu"<<endl;
            }
};


int main(){

Animal *G=new dog(); 

G->speak();
delete G;
 
return 0;    
}