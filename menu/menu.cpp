#include "menu.h"

using namespace std;

void Menu::displayMainMenu() {
    cout << "Main Menu:" << endl;
    cout << "1. Add Patient" << endl;
    cout << "2. Add Doctor" << endl;
    cout << "3. Display All Patients" << endl;
    cout << "4. Display All Doctors" << endl;
    cout << "5. Exit" << endl;
}

void Menu::handleInput() {
    int choice;
    while (true) {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice) {
        case 1: {
            char* name = new char[25];
            char* patientID = new char[25];
            char* address = new char[25];
            int age;
            Gender gender;

            cout << "Enter name: ";
            cin.ignore();
            cin.getline(name, 25);
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter gender (0 for Male, 1 for Female): ";
            int g;
            cin >> g;
            gender = (g == 0) ? Male : Female;
            cin.ignore();

            cout << "Enter patient ID: ";
            cin.getline(patientID, 25);
            cout << "Enter address: ";
            cin.getline(address, 25);

            Patient newPatient(name, age, gender, patientID, address);
            database.addPatient(newPatient);

            delete[] name;
            delete[] patientID;
            delete[] address;
            break;
        }
        case 2: {
            string name, specialization, doctorID;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter specialization: ";
            cin >> specialization;
            cout << "Enter doctor ID: ";
            cin >> doctorID;

            Doctor newDoctor(name.c_str(), specialization.c_str(), doctorID.c_str());
            database.addDoctor(newDoctor);
            break;
        }
        case 3:
            database.displayAllPatients();
            break;
        case 4:
            database.displayAllDoctors();
            break;
        case 5:
            return; 
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    }
}