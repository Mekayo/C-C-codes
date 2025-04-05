#include<iostream>
using namespace std;
class sol{

public:
    int fun1(int a){
        cout<<"int: "<<a<<endl;
    }
    int fun1(double x){
        cout<<"char : "<<x<<endl;
    }
    int fun1(double a, double b){
        double sum=a+b; 
        cout<<"sum of double: "<<sum<<endl;
    }

};

int main(){
        cout<<"function over loading-->"<<endl;
        
        sol s1;
        s1.fun1(10);
        s1.fun1('b');
        s1.fun1(1.22,3.44);

    return 0;
}