// Function decleration

#include <iostream>
#include <string>

using namespace std;


#ifndef BMI_H
#define BMI_H

class BMI {
public:
    //Default Constructor
    BMI();
    //Overload Constructor
    BMI(string ,int ,double);
    //Destructor
    ~BMI();
    //Accessor Functions
    string getName() const;
        //getName - returns name of patient
    int getHeight() const;
        //getHeight - returns height of patient
    double getWeight() const;
        //getWeight - returns weight of patient

    //Mutator Functions
    void setName(string);
        //setName - sets name of patient
        //@param string - name of patient
    void setHeight(int);
        //setHeight - sets height of patient
        //@param int - height of patient
    void setWeight(double);
        //setWeignt - sets weight of patient
        //@param double - weight of patient

    double calculateBMI() const;
        //calculateBMI - calculates BMI of patient
        //@return double - BMI of student

private:
    //Member Variables
    string newName;
    int newHeight;
    double newWeight;
};


#endif // BMI_H
