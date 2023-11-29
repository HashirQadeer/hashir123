#include <iostream>
#include <string>

using namespace std;

int main() {
    // Get the student ID as input
    string studentID;
    cout << "Enter your student ID: ";
    cin >> studentID;

    // Extract the first two characters from the student ID
    string programCode = studentID.substr(0, 2);

    // Check if the program is Bachelors or Masters
    if (programCode == "bc") {
        cout << "Program Name: Bachelors" << endl;
    } else if (programCode == "mc") {
        cout << "Program Name: Masters" << endl;
    } else {
        cout << "Program Name: Unknown" << endl;
    }

    return 0;
}
