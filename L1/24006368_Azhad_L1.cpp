#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int studentId;
    string studentEmail;
    int phone;

};


int main(){

    int size = 2;

    Student students[size];

    for(int i = 0; i < size; i++){
        cout<< "Input Name: ";
        cin >> students[i].name;
        cout << "Input ID: ";
        cin >> students[i].studentId;
        cout << "Input Email: ";
        cin >> students[i].studentEmail;
        cout << "Input Phone: ";
        cin >> students[i].phone;
    }

    for(int i = 0; i < size; i++){
        cout << "*****************************";
        cout << "Student " << i + 1;
        cout << "Name :" << students[i].name;
        cout << "ID: " << students[i].studentId;
        cout << "Email: " << students[i].studentEmail;
        cout << "Phone: " << students[i].phone;
        cout << "*****************************";
    }

    return 0;
}