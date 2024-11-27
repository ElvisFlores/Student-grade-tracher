#include "student.h"
#include <iomanip>
#include <iostream>

using namespace std; 

Students::Students(string studentFristName,string studentLastName){
    firstName = studentFristName;
    lastName = studentLastName;
}

void Students::addGrade(double grade){
    grades.push_back(grade);
}
double Students::calculateAverage(){
    if(grades.empty()){
        return 0;
    } else { 
        double sum = 0;
        for(double grade : grades){
            sum += grade;
        }    
        return sum / grades.size();
    }
}
void Students::printDetials(){
    cout << " Student's full name: " << firstName << " " << lastName << endl;
    double average = calculateAverage();
    cout << " The average grade the student recieved is:" << average << "%" << endl;
     if (average > 89){
        cout << " The student has passed with an A";
    }
    else if ( average > 79){
        cout << " The student has passed with an B";
    }
    else if (average > 69){
        cout << " The student has passed with an C";
    }
    else if (average > 59){
        cout << " The student has failed with an D";
    }
    else { 
        cout << " The student has failed with an F";
    }
    
}