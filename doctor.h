#ifndef DOCTOR_H
#define DOCTOR_H

#include "libs.h"

class Doctor {
    char* _name;
    char* _specialization;
    char* _doctorID;
    // vector<Appointment*> *_appointments;

public:
    Doctor(char* name, char* specialization, char* doctorID);
    ~Doctor();
    // void addAppointment(const Appointment& appointment);
    // void displayAppointments();
    void showInfo();
};



#endif //DOCTOR_H
