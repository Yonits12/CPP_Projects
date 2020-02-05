#ifndef PATIENT_H
#define PATIENT_H

using namespace std;
#include <string>

class Patient
{
    public:
        Patient();
        virtual ~Patient();

    protected:

    private:
        string name;
        int id;
};

#endif // PATIENT_H
