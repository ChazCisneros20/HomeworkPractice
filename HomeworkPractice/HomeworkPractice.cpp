#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {

    int numStudents;
    int inputVal = 1;
    int wStudent = 0;
    int wGrade = 0;

        
        cout << "How many students ";
        cin >> numStudents;

        vector<vector<int>> gradeBook(numStudents);

        //outer loop for each Student
        for (int i = 0; i < numStudents; i++) {

            cout << "Student " << i + 1 << ':' << endl;


            //inner loop for number of grades and grade percentages

            cout << "enter grade " << 1 << ": " << endl;
            cin >> inputVal;

                for (int j = 1; inputVal > 0; j++) {
                    gradeBook[i].push_back(inputVal);

                    cout << "enter grade " << j + 1 << ": " << endl;
                    cin >> inputVal;
                }


            inputVal = 1;

        }
        //Reporting:

        if (gradeBook[0].size() > 0) {
            cout << "Which student? " << endl;
            cin >> wStudent;

            cout << "They have " << gradeBook[wStudent - 1].size() << " grades!" << endl;

            cout << "Which grade? " << endl;
            cin >> wGrade;

            cout << "The grade is " << gradeBook[wStudent - 1][wGrade - 1] << " !" << endl;
        }


    return 0;
}
