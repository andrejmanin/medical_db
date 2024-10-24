#include "menu.h"
#include <iostream>

void Menu::displayMainMenu() {
    std::cout << "Main Menu:" << std::endl;
    std::cout << "1. Add Patient" << std::endl;
    std::cout << "2. Add Doctor" << std::endl;
    std::cout << "3. Display All Patients" << std::endl;
    std::cout << "4. Display All Doctors" << std::endl;
    std::cout << "5. Exit" << std::endl;
}

void Menu::handleInput() {
    int choice;
    while (true) {
        displayMainMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string name, patientID, address;
            int age;
            Gender gender;

            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter age: ";
            std::cin >> age;
            std::cout << "Enter gender (0 for Male, 1 for Female): ";
            int g;
            std::cin >> g;
            gender = (g == 0) ? Male : Female;
            std::cout << "Enter patient ID: ";
            std::cin >> patientID;
            std::cout << "Enter address: ";
            std::cin >> address;

            Patient newPatient(name.c_str(), age, gender, patientID.c_str(), address.c_str());
            database.addPatient(newPatient);
            break;
        }
        case 2: {
            std::string name, specialization, doctorID;

            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter specialization: ";
            std::cin >> specialization;
            std::cout << "Enter doctor ID: ";
            std::cin >> doctorID;

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
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}