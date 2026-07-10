// CIS_5 Week 3 Example – Score Analyzer with Pre-filled Data

#include <iostream>
#include <iomanip> 

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
    // =============================================
    //  Pre-filled test scores (30 students)
    // =============================================
    const int MAX_STUDENTS = 30;
    int scores[MAX_STUDENTS] = {
        78, 92, 65, 88, 45, 100, 72, 81, 59, 96,
        84, 67, 91, 53, 77, 89, 62, 98, 74, 85,
        48, 93, 70, 82, 66, 95, 55, 87, 79, 64
    };

    // We will only use the first 30 (full array in this case)
    const int numStudents = 30;

	double average = 0;
	int high = scores[0];
	int low = scores[0];
	int passed = 0;
	int gotA = 0;

    // =============================================
    //  Calculations
    // =============================================
	for (int i = 0; i < numStudents; i++) {
		average += scores[i];

		if (scores[i] > high) {
			high = scores[i];
		}
		if (scores[i] < low) {
			low = scores[i];
		}
		if (scores[i] >= 60) {
			passed++;
		}
		if (scores[i] >= 90) {
			gotA++;
		}
	}
	average /= numStudents;


    // =============================================
    //  Output
    // =============================================
	cout << "Number of students: " << numStudents << endl;
	cout << "Average score: " << fixed << setprecision(2) << average << endl;
	cout << "Highest score: " << high << endl;
	cout << "Lowest score: " << low << endl;
	cout << "Number of students who passed: " << passed << endl;
	cout << "Number of students who got an A: " << gotA << endl << endl;

    // Print scores using range-based for (modern & clean)
	cout << "Scores in original order:" << endl;
	for (int score : scores) {
		cout << score << " ";
	}
    // Print in reverse using classic for
	cout << "\nScores in reverse order:" << endl;
	for (int i = numStudents - 1; i >= 0; --i) {
		cout << scores[i] << " ";
	}
	cout << endl;

    return 0;
}
