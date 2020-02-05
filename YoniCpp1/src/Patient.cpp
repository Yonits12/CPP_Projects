#include "Patient.h"

Patient::Patient(string name, unsigned int id)
{
    this->name = name;
    this->id = id;
}

void Patient::setPatientName(string newName){
    this->name = newName;
}
void Patient::setPatientID(unsigned int newID){
    this->id = newID;
}
string Patient::getPatientName(){
    return this->name;
}
unsigned int Patient::getPatientID(){
    return this->id;
}

Patient* Patient::clone()
{
    return new Patient(this->name, this->id);
}

Patient::~Patient()
{
    //dtor
}
