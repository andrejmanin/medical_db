#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include "patient.h"
#include "doctor.h"

class Database {
    std::vector<Patient> patients;
    std::vector<Doctor> doctors;

public:
    void addPatient(const Patient& patient);
    void addDoctor(const Doctor& doctor);
    Patient* findPatientByID(const std::string& patientID);
    Doctor* findDoctorByID(const std::string& doctorID);
    void displayAllPatients() const;
    void displayAllDoctors() const;
};

#endif // DATABASE_H