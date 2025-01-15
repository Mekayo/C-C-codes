#include<iostream>                         
#include<fstream>                            
using namespace std;
int main() {
    fstream jack;                       
    jack.open("jack.txt", ios::out);                
    if (!jack) {                            
        cout<<" Error while creating the file ";          
    }
    else {
        cout<<"File created and data got written to file";    
        jack<<"This is a blog posted ";  
        jack.close();                   
    }
    return 0;
}
