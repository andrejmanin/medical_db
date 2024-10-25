#include "doctor.h"
#include <cstring>

Doctor::Doctor(const char *name, const char *specialization, const char *doctorID) {
    _name = new char[strlen(name) + 1];
    strcpy(_name, name);
    _specialization = new char[strlen(specialization) + 1];
    strcpy(_specialization, specialization);
    _doctorID = new char[strlen(doctorID) + 1];
    strcpy(_doctorID, doctorID);
    _appointments = new vector<Appointment*>;
}

Doctor::Doctor(const Doctor &doctor) {
    _name = new char[strlen(doctor._name) + 1];
    strcpy(_name, doctor._name);
    _specialization = new char[strlen(doctor._specialization) + 1];
    strcpy(_specialization, doctor._specialization);
    _doctorID = new char[strlen(doctor._doctorID) + 1];
    strcpy(_doctorID, doctor._doctorID);
    _appointments = doctor._appointments;
}

Doctor::~Doctor() {
    delete[] _name;
    delete[] _specialization;
    delete[] _doctorID;
}

void Doctor::addAppointment(Appointment& appointment) {
    _appointments->push_back(&appointment);
}

void Doctor::displayAppointments() {
    for(int i = 0; i < _appointments->size(); i++) {
        cout << i + 1 << " Appointment: " << endl;
        (*_appointments)[i]->displayAppointment();
    }
}

void Doctor::showInfo() const {
    cout << "Name: " << _name << endl;
    cout << "Specialization: " << _specialization << endl;
    cout << "Doctor ID: " << _doctorID << endl;
}

