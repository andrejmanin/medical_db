#ifndef PATIENT_H
#define PATIENT_H

#include <cstring>
#include "libs.h"

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
    ~Patient();
    void addRecord(MedicalRecord& record);
    void displayInfo() const;
    void displayMedicalHistory() const;
};



#endif //PATIENT_H
