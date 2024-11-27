#include "student.h"
#include <iostream>

int main(){

    string firstName;
    cout << "Please enter the student's frist name: ";
    cin >> firstName;
    
    string lastName;
    cout << "Plase enter the student's last name: ";
    cin >> lastName;

    Students studentsProfile(firstName, lastName);

    int amountOfGrades;
    cout << " Enter the amount of grade youd wish to input for the student: ";
    cin >> amountOfGrades;

    for(int i = 0; i < amountOfGrades; i++){
        double grade;
        cout << "Please enter grade " << (i + 1) << ": ";
        cin >> grade;
        studentsProfile.addGrade(grade);
    }

    cout << "\n Students Details: "<< endl;
    studentsProfile.printDetials();
    cout << endl;

    return 0;
}
  