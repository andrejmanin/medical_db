#ifndef PATIENT_H
#define PATIENT_H

#include "../medical_record/medical_record.h"
#include <vector>

using namespace std;

enum Gender {
    Male,
    Female
};

class Patient {
    char* _name;
    int _age;
    Gender _gender;
    char* _patientID;
    char* _address;
    vector<MedicalRecord*> *_medicalHistory;

public:
    Patient(const char* name, int age, Gender gender, const char* patientID, const char* address);
    Patient(const Patient& patient);
    ~Patient();
    void addRecord(MedicalRecord& record);
    void displayInfo() const;
    void displayMedicalHistory() const;
    char* getPatientID() const { return _patientID; }
};



#endif //PATIENT_H
