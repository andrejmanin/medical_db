#include "database.h"

void Database::addPatient(Patient& patient) {
    Patient* tempPatient = new Patient(patient);
    patients.push_back(tempPatient);
}

void Database::addDoctor(Doctor& doctor) {
    Doctor* tempDoctor = new Doctor(doctor);
    doctors.push_back(tempDoctor);
}

Patient* Database::findPatientByID(const std::string& patientID) {
    for (auto& patient : patients) {
        if (patientID == patient->getPatientID()) {
            return patient;
        }
    }
    return nullptr;
}

Doctor* Database::findDoctorByID(const std::string& doctorID) {
    for (auto& doctor : doctors) {
        if (doctorID == doctor->getDoctorID()) {
            return doctor;
        }
    }
    return nullptr;
}

void Database::displayAllPatients() const {
    std::cout << "List of Patients:" << std::endl;
    for (auto patient : patients) {
        patient->displayInfo();
    }
}

void Database::displayAllDoctors() const {
    std::cout << "List of Doctors:" << std::endl;
    for (const auto& doctor : doctors) {
        doctor->showInfo();
    }
}