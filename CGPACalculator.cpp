#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    double totalCredits = 0.0;
    double totalGradePoints = 0.0;

    for (int i = 0; i < numCourses; ++i) {
        double grade;
        int credits;

        cout << "Enter grade for course " << i + 1 << ": ";
        cin >> grade;

        cout << "Enter credits for course " << i + 1 << ": ";
        cin >> credits;

        totalCredits += credits;
        totalGradePoints += grade * credits;
    }

    double GPA = totalGradePoints / totalCredits;
    cout << fixed << setprecision(2);
    cout << "Your GPA for this semester: " << GPA << " out of 10.00" << endl;

    // Convert GPA to percentage
    double GPA_percentage = GPA * 9.5;
    cout << "Your GPA for this semester in percentage: " << GPA_percentage << "%" << endl;

    // Here you might store this GPA in an array or vector for each semester
    // Then you can calculate the CGPA using data from all semesters

    // Example: calculating CGPA assuming only one semester
    double CGPA = GPA;
    double CGPA_percentage = GPA_percentage; // CGPA percentage will be same as GPA percentage for single semester
    cout << "Your CGPA: " << CGPA << " out of 10.00" << endl;
    cout << "Your CGPA in percentage: " << CGPA_percentage << "%" << endl;

    return 0;
}
