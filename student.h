#include <string>
#include <vector>

using namespace std; 

class Students {
public:
    Students(string studentFirstName, string studentLastName);
    void addGrade(double grade);
    void printDetials();
    double calculateAverage();
    
   

private:
    string firstName;
    string lastName;
    vector<double> grades;
};
