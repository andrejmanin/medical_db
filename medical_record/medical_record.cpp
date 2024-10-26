#include "medical_record.h"
#include <iostream>
#include <cstring>

using namespace std;

MedicalRecord::MedicalRecord(const char* diseaseName, const char* treatmentPlan, const char* diagnosisDate, const char* doctorID) {
    _diseaseName = new char[strlen(diseaseName) + 1];
    strcpy(_diseaseName, diseaseName);
    _treatmentPlan = new char[strlen(treatmentPlan) + 1];
    strcpy(_treatmentPlan, treatmentPlan);
    _diagnosisDate = new char[strlen(diagnosisDate) + 1];
    strcpy(_diagnosisDate, diagnosisDate);
    _doctorID = new char[strlen(doctorID) + 1];
    strcpy(_doctorID, doctorID);
}
MedicalRecord::~MedicalRecord() {
    delete[] _diseaseName;
    delete[] _treatmentPlan;
    delete[] _diagnosisDate;
    delete[] _doctorID;
}
void MedicalRecord::displayAppointment() const {
    cout << "\tPatientID: " << _diseaseName << endl;
    cout << "\tDoctorID: " << _treatmentPlan << endl;
    cout << "\tAppointmentDate: " << _diagnosisDate << endl;
    cout << "\tNotes: " << _doctorID << endl;
}