#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
#include <iostream>

class Appointment {
    std::string patientID;
    std::string doctorID;
    std::string appointmentDate;
    std::string notes;

public:
    Appointment(const std::string& pID, const std::string& dID, const std::string& date, const std::string& notes);
    void displayAppointment() const;
};

#endif // APPOINTMENT_H