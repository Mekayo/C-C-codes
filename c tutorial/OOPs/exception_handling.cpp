#include<iostream>
using namespace std;


class divide{
public:

    void isdivisble( float a,float b){

        cout<<"inside class testing......"<<endl;
        try{
            if(b==0){
                throw b;
            }
            else {
                cout<<"product: "<<a/b<<endl;
            }
            }
            catch(float){
                cout<<"caught inside the catch in class"<<endl;
                throw;
            }
            cout<<"outside of the function throws to other exception handling "<<endl;
    }
};


int main(){
int x,y;
cout<<"Enter the numebr:"<<endl;
cin>>x>>y;
try{
divide num1;
num1.isdivisble(x,y);
}

catch(float){
    cout<<"divident is not divisble by zero...4"<<endl;
}

return 0;
}