#ifndef PATIENT_H
#define PATIENT_H

using namespace std;
#include <string>

class Patient
{
    public:
        Patient(string name, unsigned int id);
        virtual ~Patient();
        void setPatientName(string name);
        void setPatientID(unsigned int id);
        string getPatientName();
        unsigned int getPatientID();
        Patient* clone();

    protected:

    private:
        string name;
        unsigned int id;
};

#endif // PATIENT_H
