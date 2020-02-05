#include "Hospital.h"
using namespace std;

Hospital::Hospital(string name, int maxBeds){
    setHospitalName(name);
    setHospitalBeds(maxBeds);
    numFreeBeds = maxBeds;

    this->patients = new vector<Patient*>(maxBeds);
}

void Hospital::recievePatient(Patient *newPatient){
    cout << "____ in func: recievePatient() ____" << endl;
    if(newPatient == NULL)   //check if there are empty beds
    {
        cout << "Null ptr patient" << endl;
        return;
    }
    if(this->getHospitalFreeBeds() > 0)
    {
        if(checkUniquePatient(newPatient))  //check uniqueness of the patient
        {
            cout << "____ pushing Patient !!!" << " ____" << endl;
            Patient cloned = *(newPatient->clone());
            this->patients->push_back(&cloned);
            std::vector<Patient*> *patients_ptr = this->patients;
            std::vector<Patient*> patients_vec = *(this->patients);
            Patient* pat_ptr = patients_vec[0];
            occupyBeds(1);
        }
    }else{
        cout << "The hospital is fully occupied" << endl;
    }
}

bool Hospital::checkUniquePatient(Patient *patient){
    cout << "____ in func: checkUniquePatient() ____" << endl;
    cout << "    ____ freeBeds: " << getHospitalFreeBeds() << " ____" << endl;
    for (unsigned int i = 0; i < (this->maxBeds - this->getHospitalFreeBeds()); i++){// loop over patients vector
        cout << "      ____ in for loop: " <<  i << " ____" << endl;
        std::vector<Patient*> *patients_ptr = this->patients;
        cout << "      ____ 1 ____" << endl;
        std::vector<Patient*> patients_vec = *patients_ptr;
        cout << "      ____ 2 ____" << endl;
        Patient *curr_Patient = patients_vec[i];
        cout << "      ____ 3 ____" << endl;
        cout << "      ____ curr_Patient name: " << curr_Patient->getPatientName() << " ____" << endl;
        cout << "      ____ curr_Patient ID: " << curr_Patient->getPatientID() << " ____" << endl;
        if(curr_Patient->getPatientID() == patient->getPatientID()){   // ID is unique for a patient - a match is permitted!
            cout << "Patient already exist" << endl;
            return false;
        }
    }
    return true;
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

void Hospital::freeBeds(int numBeds){
    this->numFreeBeds += numBeds;
    if(this->numFreeBeds > this->maxBeds){
        this->numFreeBeds = maxBeds;
    }
}

void Hospital::occupyBeds(int numBeds){
    this->numFreeBeds -= numBeds;
    if(this->numFreeBeds < 0){
        this->numFreeBeds = 0;
    }
}

unsigned int Hospital::getHospitalFreeBeds(){
    return this->numFreeBeds;
}

Hospital::~Hospital(){
    //dtor
}
