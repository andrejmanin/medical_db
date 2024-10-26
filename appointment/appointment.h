#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <iostream>
using namespace std;

class Appointment {
    string patientID;
    string doctorID;
    string appointmentDate;
    string notes;

public:
    Appointment(const string& pID, const string& dID, const string& date, const string& notes);
    void displayAppointment() const;
};

#endif // APPOINTMENT_H