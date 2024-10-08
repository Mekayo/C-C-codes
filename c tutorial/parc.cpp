#include<iostream>
using namespace std;

class Info
{
    char name[50];
    int roll_no;
    char branch[100];
    public: 
            void get_data(){
                cout<<"Enter the deatails of student--->"<<endl;

                cout<<"Enter name: ";
                cin>>name;
                cout<<"Enter roll no: ";
                cin>>roll_no;
                cout<<"Enter bracnh: ";
                cin>>branch;
            }  
             void display_data() {
            cout << "\nStudent Information:" << endl;
            cout << "Name: " << name << endl;
            cout << "Roll No: " << roll_no << endl;
            cout << "Branch: " << branch << endl;
        }    
           

};
class subject:public Info
{   
int OOPs;
int DSA;
int Maths; 

public:
int total_mark =0;
void get_marks(){
    cout<<"Enter marks of student out of 100 : "<<endl;
    cout<<"Marks in OOPs:";
    cin>>OOPs;
    cout<<"Marks of DSA:";
    cin>>DSA;
    cout<<"Marks of Maths:";
    cin>>Maths;
    total_mark+=OOPs+DSA+Maths;
}
 void display_marks() {
            cout << "\nMarks Obtained:" << endl; 
            cout << "OOPs: " << OOPs << endl;
            cout << "DSA: " << DSA << endl;
            cout << "Maths: " << Maths << endl;
            cout << "Total Marks: " << total_mark << "/300" << endl;
        }
};

class Result:public subject
{
    double percentage=0.00;

public:

void perct(){
percentage=(total_mark/300)*100;
}
 
void display_result() {
            cout << "Percentage: " << percentage << "%" << endl;
            if (percentage >= 33.33) {
                cout << "Status: Pass" << endl;
            } else {
                cout << "Status: Fail" << endl;
            }
        }
};
class student:public Result{
public:
void getdetail(student obj,int n){
    
}

};


int main(){
    
Result student;

    student.get_data();           // Get student's basic info
    student.get_marks();          // Get student's marks
    student.perct(); // Calculate percentage

    // Display student's details, marks, and result
    student.display_data();
    student.display_marks();
    student.display_result();



    return 0;
}

