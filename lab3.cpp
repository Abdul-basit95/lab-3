
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Ali";
    int age = 20;
    float gpa = 3.5;

    cout << "Student Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    return 0;
}


#include <iostream>
using namespace std;

/*
A variable stores data.
cin takes input from the user.
cout displays output on the screen.
*/

int main() {
    // Declare a variable
    int age = 20;

    // Display the value
    cout << "Age: " << age << endl;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string department;
    int age;
    float gpa;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "Enter department: ";
    cin >> department;

    cout << "\nStudent Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int age;
    int birthYear;

    cout << "Enter your age: ";
    cin >> age;

    birthYear = 2026 - age;

    cout << "Your age: " << age << endl;
    cout << "Your birth year: " << birthYear << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    double fee = 75000.50;

    cout << "Student Grade: " << grade << endl;
    cout << "University Fee: " << fee << endl;

    return 0;
}

