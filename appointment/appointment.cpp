#include "appointment.h"

Appointment::Appointment(const std::string& pID, const std::string& dID, const std::string& date, const std::string& notes)
    : patientID(pID), doctorID(dID), appointmentDate(date), notes(notes) {}

void Appointment::displayAppointment() const {
    std::cout << "Appointment Details:" << std::endl;
    std::cout << "\tPatient ID: " << patientID << std::endl;
    std::cout << "\tDoctor ID: " << doctorID << std::endl;
    std::cout << "\tAppointment Date: " << appointmentDate << std::endl;
    std::cout << "\tNotes: " << notes << std::endl;
}