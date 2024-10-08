#include<iostream>
using namespace std;

bool ispalindrone(string str,int s,int e)
{
if(s>e){
    return true;
}
if(str[s]!=str[e]){
    return false;
    
}
else
{
     return ispalindrone(str,s+1,e-1); 
}


}

int main(){


    string name="hitesh";
    bool result= ispalindrone(name,0,name.length()-1);

if(result){
    cout<<"its is a palindrone "<<endl;
}
else{
    cout<<"its is not palindrone"<<endl;
}

    return 0;
}