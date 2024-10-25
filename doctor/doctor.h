#ifndef DOCTOR_H
#define DOCTOR_H

#include "../appointment/appointment.h"
#include <vector>

using namespace std;

class Doctor {
    char* _name;
    char* _specialization;
    char* _doctorID;
    vector<Appointment*> *_appointments;

public:
    Doctor(const char* name, const char* specialization, const char* doctorID);
    Doctor(const Doctor& doctor);
    ~Doctor();
    void addAppointment(Appointment& appointment);
    void displayAppointments();
    void showInfo() const;
    char* getDoctorID() const { return _doctorID; }
};



#endif //DOCTOR_H
