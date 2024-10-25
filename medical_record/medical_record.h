#ifndef MEDICAL_RECORD_H
#define MEDICAL_RECORD_H


class MedicalRecord {
    char* _diseaseName;
    char* _treatmentPlan;
    char* _diagnosisDate;
    char* _doctorID;

public:
    MedicalRecord(const char* diseaseName, const char* treatmentPlan, const char* diagnosisDate, const char* doctorID);
    ~MedicalRecord();
    void displayAppointment() const;

};



#endif //MEDICAL_RECORD_H
