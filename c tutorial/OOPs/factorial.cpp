/* using recursion getiting factorial */
#include<iostream>
using namespace std;
class factorial
{
public:
    
int get_facto(int num){
    if(num<=1){
         return 1;
    }
    else{
        return num*get_facto(num-1);
    }
}
};
int main(){
factorial fact;
 int n;
 cout<<"Enter a number ";
 cin>>n;

if(n<=0){
    cout<<"Factorial of "<<n<<" is  not found"<<endl<<"!!num13ber entered is zero or a negative number !! "<<endl;

}
else{
    cout<<"factorial of  "<<n<<" is: "<<fact.get_facto(n)<<endl;
}
return 0;
}