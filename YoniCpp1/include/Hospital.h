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
        void freeBeds(int numBeds);
        void occupyBeds(int numBeds);
        string getHospitalName();
        unsigned int getHospitalBeds();
        unsigned int getHospitalFreeBeds();

    protected:

    private:
        string name;
        int maxBeds, numFreeBeds;
        std::vector<Patient*> *patients;

        bool checkUniquePatient(Patient *patient);
};

#endif // HOSPITAL_H
