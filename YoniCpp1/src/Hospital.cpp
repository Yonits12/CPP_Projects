#include "Hospital.h"
using namespace std;

Hospital::Hospital(string name, int maxBeds){
    setHospitalName(name);
    setHospitalBeds(maxBeds);
    //TODO init patient* vector

}

void Hospital::recievePatient(Patient *newPatient){
    if(newPatient == NULL)   //check if there are empty beds
    {
        cout << "Null ptr patient" << endl;
        return;
    }
    if(this->patients.size() < this->getHospitalBeds())
    {
        if(checkUniquePatient(newPatient))  //check uniqueness of the patient
        {
            this->patients.push_back(newPatient);
        }
    }else{
        cout << "The hospital is fully occupied" << endl;
    }
}

void Hospital::setHospitalName(string newName){
    this->name = newName;
}

string Hospital::getHospitalName(){
    return this->name;
}

void Hospital::setHospitalBeds(int numBeds){
    this->maxBeds = numBeds;
}

unsigned int Hospital::getHospitalBeds(){
    return this->maxBeds;
}

bool Hospital::checkUniquePatient(Patient *patient){
    //stub
    return true;
}


Hospital::~Hospital(){
    //dtor
}
