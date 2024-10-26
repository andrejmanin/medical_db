#ifndef DATABASE_H
#define DATABASE_H

#include "../patient/patient.h"
#include "../doctor/doctor.h"
#include <string>
#include <vector>

using namespace std;

class Database {
    vector<Patient*> patients;
    vector<Doctor*> doctors;

public:
    void addPatient(Patient& patient);
    void addDoctor(Doctor& doctor);
    Patient* findPatientByID(const string& patientID);
    Doctor* findDoctorByID(const string& doctorID);
    void displayAllPatients() const;
    void displayAllDoctors() const;
};

#endif // DATABASE_H