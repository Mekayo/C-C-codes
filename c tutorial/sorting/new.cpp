#include<iostream>
#include<cstring>
using namespace std;
class Stacks{
private:
int *data;
int nextIndex;
int capacity;
public:
Stacks(){
capacity = 1000;
data = new int[1000];
nextIndex = 0;
}
int peek(){
return data[nextIndex-1];
}
void push(int x){
if(capacity == nextIndex){
cout<<"Stack Overflow! ";
return;
}
data[nextIndex] = x;
nextIndex++;
 
return;
}
void pop(){
if(nextIndex == 0){
cout<<"Stack Underflow! ";
return;
}
nextIndex--;
}
bool isEmpty(){
return nextIndex == 0;
}
int sz(){
return nextIndex;
}
};
int calculate_postfix(string &postfix){
Stacks s;
for(int i=0; i<postfix.size(); i++){
if(postfix[i] == '+'){
int a = s.peek();
s.pop();
int b = s.peek();
s.pop();
s.push(a+b);
}
else if(postfix[i] == '-'){
 
int a = s.peek();
s.pop();
int b = s.peek();
s.pop();
s.push(a-b);
}
else if(postfix[i] == '*'){
int a = s.peek();
s.pop();
int b = s.peek();
s.pop();
s.push(a*b);
}
else if(postfix[i] == '/'){
int a = s.peek();
s.pop();
int b = s.peek();
s.pop();
s.push(a/b);
}
else{
s.push(postfix[i]-'0');
}
}
return s.peek();
}
 
int main(){
string postfix;
cout<<"Enter the postfix expression: ";
cin>>postfix;
int ans = calculate_postfix(postfix);
cout<<"Answer is: "<<ans<<endl;
}