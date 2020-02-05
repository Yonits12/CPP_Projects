#include "Hospital.h"
using namespace std;

Hospital::Hospital(string name, int maxBeds)
{
    setHospitalName(name);
    setHospitalBeds(maxBeds);
    //TODO init patient vector

}

void Hospital::recievePatient(Patient newPatient){
            //TODO: check num of empty beds
            //TODO: check uniqueness of patient
            //TODO: check patient validity
        }

void Hospital::setHospitalName(string newName)
{
    this->name = newName;
}

string Hospital::getHospitalName()
{
    return this->name;
}

void Hospital::setHospitalBeds(int numBeds)
{
    this->maxBeds = numBeds;
}

int Hospital::getHospitalBeds()
{
    return this->maxBeds;
}


Hospital::~Hospital()
{
    //dtor
}
