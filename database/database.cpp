#include "database.h"
#include <iostream>

void Database::addPatient(const Patient& patient) {
    patients.push_back(patient);
}

void Database::addDoctor(const Doctor& doctor) {
    doctors.push_back(doctor);
}

Patient* Database::findPatientByID(const std::string& patientID) {
    for (auto& patient : patients) {
        if (patientID == patient.getPatientID()) {
            return &patient;
        }
    }
    return nullptr;
}

Doctor* Database::findDoctorByID(const std::string& doctorID) {
    for (auto& doctor : doctors) {
        if (doctorID == doctor.getDoctorID()) {
            return &doctor;
        }
    }
    return nullptr;
}

void Database::displayAllPatients() const {
    std::cout << "List of Patients:" << std::endl;
    for (const auto& patient : patients) {
        patient.displayInfo();
    }
}

void Database::displayAllDoctors() const {
    std::cout << "List of Doctors:" << std::endl;
    for (const auto& doctor : doctors) {
        doctor.showInfo();
    }
}