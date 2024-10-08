//// WAP to get student deatail ,name ,roll,marks,result,sum ,percentage, or pass or fail status using multiple inheritance  

#include<iostream>
using namespace std;

class Info {
    protected:
        char name[50];
        int roll_no;
        char branch[100];

    public: 
        void get_data() {
            cout << "Enter the details of student--->" << endl;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll no: ";
            cin >> roll_no;
            cout << "Enter branch: ";
            cin >> branch;
        }

        void display_data() {
            cout << "\nStudent Information:" << endl;
            cout << "Name: " << name << endl;
            cout << "Roll No: " << roll_no << endl;
            cout << "Branch: " << branch << endl;
        }
};

class Subject : public Info {
    protected:
        int OOPs, DSA, Maths;
        int total_marks;

    public:
        void get_marks() {
            cout << "\nEnter marks of student out of 100:" << endl;
            cout << "Marks in OOPs: ";
            cin >> OOPs;
            cout << "Marks in DSA: ";
            cin >> DSA;
            cout << "Marks in Maths: ";
            cin >> Maths;
            total_marks = OOPs + DSA + Maths;
        }

        void display_marks() {
            cout << "\nMarks Obtained:" << endl;
            cout << "OOPs: " << OOPs << endl;
            cout << "DSA: " << DSA << endl;
            cout << "Maths: " << Maths << endl;
            cout << "Total Marks: " << total_marks << "/300" << endl;
        }
};

class Result : public Subject {
    private:
        double percentage;

    public:
        void calculate_percentage() {
            percentage = (total_marks / 300.0) * 100;
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

int main() {
int n;
cout<<"Enter number of student:";
cin>>n;

    Result student[n];
for(int i=0;i<n;i++)
{
    student[i].get_data();           // Get student's basic info
    student[i].get_marks();          // Get student's marks
    student[i].calculate_percentage(); // Calculate percentage

}
for(int j=0;j<n;j++){
    // Display student's details, marks, and result
     cout<<endl<<"________________________________"<<endl;
    student[j].display_data();
    student[j].display_marks();
    student[j].display_result();
    cout<<"________________________________"<<endl;
}

    return 0;
}