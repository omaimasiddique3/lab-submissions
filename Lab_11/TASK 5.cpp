#include <stdio.h>

struct HospitalRecord {
    int recordId;
    struct PatientInfo {
        int patientId;
        char name[50];
        int age;
    } patient; 
};

int main() {
    struct HospitalRecord record = {5001, {101, "Ahmed Raza", 28}};
    struct HospitalRecord *ptr = &record;

    
    printf("Hospital Record ID: %d\n", ptr->recordId);
    printf("Patient ID: %d\n", ptr->patient.patientId);
    printf("Patient Name: %s\n", ptr->patient.name);
    printf("Patient Age: %d\n", ptr->patient.age);

    return 0;
}
