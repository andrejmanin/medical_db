#include "patient.h"

Patient::Patient(const char* name, int age, Gender gender, const char* patientID, const char* address) {
    _name = new char[strlen(name) + 1];
    strcpy(_name, name);
    _age = age;
    _gender = gender;
    _patientID = new char[strlen(patientID) + 1];
    strcpy(_patientID, patientID);
    _address = new char[strlen(address) + 1];
    strcpy(_address, address);
    _medicalHistory = new vector<MedicalRecord*>;
}
Patient::~Patient() {
    delete[] _name;
    delete[] _patientID;
    delete[] _address;
}
void Patient::addRecord(MedicalRecord& record) {
    _medicalHistory->push_back(&record);
}
void Patient::displayInfo() const {
    cout << "Patient name: " << _name << endl;
    cout << "Patient age: " << _age << endl;
    if(_gender == Male) {
        cout << "Patient gender: Male" << endl;
    } else {
        cout << "Patient gender: Female" << endl;
    }
    cout << "Patient patientID: " << _patientID << endl;
    cout << "Patient address: " << _address << endl;
}
void Patient::displayMedicalHistory() const {
    cout << "Patient medical records:" << endl;
    for(int i = 0; i < _medicalHistory->size(); i++) {
        cout << i + 1 << " Record: " << endl;
        (*_medicalHistory)[i]->displayAppointment();
    }
}