#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "Patient.h"

class Hospital
{
    public:
        Hospital(string, int);
        virtual ~Hospital();
        void recievePatient(Patient *newPatient);
        void setHospitalName(string name);
        void setHospitalBeds(int numBeds);
        string getHospitalName();
        unsigned int getHospitalBeds();

    protected:

    private:
        string name;
        int maxBeds, freeBeds;
        std::vector<Patient*> patients;

        bool checkUniquePatient(Patient *patient);
};

#endif // HOSPITAL_H
