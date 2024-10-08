#include<iostream>
using namespace std;
class multiply{
private:
int a;
int b;
public:
void setData(long int v1, long int v2){
a=v1;
b=v2;
}
void setDataByObj(multiply m1){
long int ans = m1.a * m1.b;
cout<<m1.a<<"*"<<m1.b<<": "<<ans<<endl;
}
};
int main(){
multiply c1, c2;
long int x,y;
cout<<"Enter two numbers to be multiplied: ";
cin>>x>>y;
c1.setData(x,y);
c2.setDataByObj(c1);
return 0;
}