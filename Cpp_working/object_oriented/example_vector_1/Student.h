//Header

#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    //Default Constructors
    Student();
    //Overload Constructors
    Student(string, char);
    //Destructor
    ~Student();
    //Accessor Function
    string getName() const;
        //getname
        //@return char - name of student
    char getGrade() const;
        //getGrade
        //@return char - grade of student
    //Mutotor Functions
    void setName(string);
        //setName
        //@param string - name of student
    void setGrade(char);
        //setGrade
        //@param char - grade of student


private:
    //Member Variables
    string newName;
    char newGrade;
};


#endif // STUDENT_H
