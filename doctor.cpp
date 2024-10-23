#include "doctor.h"

Doctor::Doctor(char *name, char *specialization, char *doctorID) {
    _name = new char[strlen(name) + 1];
    strcpy(_name, name);
    _specialization = new char[strlen(specialization) + 1];
    strcpy(_specialization, specialization);
    _doctorID = new char[strlen(doctorID) + 1];
    strcpy(_doctorID, doctorID);
    // _appointments = new vector<Appointment*>;
}

Doctor::~Doctor() {
    delete[] _name;
    delete[] _specialization;
    delete[] _doctorID;
}

/*void Doctor::addAppointment(const Appointment& appointment) {
    _appointments->push_back(&appointment);
}*/

/*void Doctor::displayAppointments() {
    for(int i = 0; i < _appointments->size(); i++) {
        cout << i + 1 << " Appointment: " << endl;
        (*_appointments)->showAppointment();
    }
}*/

void Doctor::showInfo() {
    cout << "Name: " << _name << endl;
    cout << "Specialization: " << _specialization << endl;
    cout << "Doctor ID: " << _doctorID << endl;
}

