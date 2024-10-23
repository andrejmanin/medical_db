#include "libs.h"

int main() {
    Patient* p = new Patient("John", 23, Male, "1234567890", "Koriatovychyv");
    MedicalRecord* record = new MedicalRecord("test", "test", "test", "test");
    p->addRecord(*record);
    p->displayInfo();
    p->displayMedicalHistory();
    delete record;
    delete p;

    cout << endl << endl;
    Doctor* doctor = new Doctor("Bob", "Surgeon", "2345678");
    doctor->showInfo();
    delete doctor;
    return 0;
}