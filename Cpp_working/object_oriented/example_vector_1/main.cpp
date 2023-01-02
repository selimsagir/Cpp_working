#include <iostream>
#include <vector>
#include <string>
#include "Student.h"

using namespace std;

void fillVector(vector<Student>&);
//filVector - fill in information
//@param vector<Student>& - students in class
void printVector(const vector<Student>&);
//printVector - prints the information of all student
//@param const vector<Student>& - student in class
int main()
{
    vector<Student> myClass;

    fillVector(myClass);
    printVector(myClass);

    return 0;
}

void fillVector(vector<Student>& newMyClass) {

    string name;
    char grade;

    cout<<"How many student are in your class? : ";
    int classSize;
    cin>>classSize;

    for(int i = 0; i < classSize; i++ ) {
        cout << " Enter Student Name : ";
        cin >> name;
        cout << "Enter Grade of Student : ";
        cin >> grade;

        Student newStudent(name , grade );
        newMyClass.push_back(newStudent);
        cout << endl;
    }
    cout << endl;
}

void printVector(const vector<Student>& newMyClass) {

    unsigned int size = newMyClass.size();

    for(unsigned int i = 0; i < size; i++) {
        cout << "Student Name : " << newMyClass[i].getName() << endl;
        cout << "Student Grade : " << newMyClass[i].getGrade() << endl;
        cout << endl;
    }

}
