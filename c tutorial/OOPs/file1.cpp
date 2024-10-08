#include<iostream>
using namespace std;
class hero
{
 private:
    int health;

   char level;


 public:
int gethealth(){
    return health;

}
char getlevel(){
    return level;
}


 void sethealth(int n)
{
health=n;
}
 void setlevel(char ch){
level=ch;
}
};

int main(){
    
hero a;
cout<<"level is"<<a.getlevel()<<endl;
cout<<"health is "<<a.gethealth()<<endl;

hero *b=new hero;

cout<<"level is "<<b->getlevel()<<endl;

cout<<"health is "<<b->gethealth()<<endl;



return 0;
} 