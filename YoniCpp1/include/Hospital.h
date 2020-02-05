#ifndef HOSPITAL_H
#define HOSPITAL_H

using namespace std;
#include <string>
#include <vector>
#include "Patient.h"

class Hospital
{
    public:
        Hospital(string, int);
        virtual ~Hospital();
        void recievePatient(Patient newPatient);
        void setHospitalName(string name);
        void setHospitalBeds(int numBeds)
        string getHospitalName();
        int getHospitalBeds();

    protected:

    private:
        string name;
        int maxBeds, freeBeds;
        std::vector<Patient> patients;
};

#endif // HOSPITAL_H
