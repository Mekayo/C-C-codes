#include<iostream>
using namespace std;

void reverse_word(string &name,int n){
    for(int i=n-1;i>=0;i--)
{
     
cout<<" "<<name[i];
    
}
}

int main(){
string name;
cout<<"Enter the name :";
cin>>name;
int n=name.length();

cout<<"reverse of this string is :"<<endl;

reverse_word(name,n);

    return 0;
}