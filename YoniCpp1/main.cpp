#include <iostream>
using namespace std;
#include "Hospital.h"
#include "Patient.h"


int main()
{
    cout << "___In main Function___" << endl;
    cout << "___Test Hospital___" << endl;

    Hospital *sorokaHos = new Hospital("Soroka", 2);
    Patient *pat1 = new Patient("Yoni", 318215282);
    Patient *pat2 = new Patient("Anna", 324215987);
    Patient *pat3 = new Patient("Ben", 318215282);

    sorokaHos->recievePatient(pat1);
    sorokaHos->recievePatient(pat2);
    sorokaHos->recievePatient(pat3);

    delete sorokaHos;
    delete pat1;
    delete pat2;
    delete pat3;

    return 0;
}


