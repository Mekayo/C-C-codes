#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    int stud[n][4]; // Declare the array after getting the value of n

    for (int i = 0; i < n; i++) {
        cout << "Enter the roll number of student " << (i + 1) << ": ";
        cin >> stud[i][0];
        cout << "Marks of Physics for student " << (i + 1) << ": ";
        cin >> stud[i][1];
        cout << "Marks of Chemistry for student " << (i + 1) << ": ";
        cin >> stud[i][2];
        cout << "Marks of Maths for student " << (i + 1) << ": ";
        cin >> stud[i][3];
    }

    cout << endl << "Roll No. and Marks of students:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1) << " - Roll No.: " << stud[i][0]
             << ", Physics: " << stud[i][1]
             << ", Chemistry: " << stud[i][2]
             << ", Maths: " << stud[i][3] << endl;
    }

    return 0;
}
