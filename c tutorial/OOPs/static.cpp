#include<iostream>
using namespace std;
class sum
{
private:
static int c;
int a,b;
public:
void get_data(int x,int y)
{    a=x;
    b=y;   
}
void show_data(){
    c++;
    cout<<a/b<<endl;
}

};

int main(){
sum a1;
 int x,y;
 cout<<"Enter values of x&y :";
 cin>>x>>y;   
a1.get_data(x,y);
a1.show_data();
return 0;

}