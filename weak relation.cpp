//#include <iostream>
//#include <string>
//using namespace std;
//
//class Patient {
//    string patientName;
//    int patientAge;
//
//public:
//    Patient(string name, int age);
//    void setPatientDetails(string name, int age);
//    void printPatientDetails() const;
//};
//
//class Doctor {
//    string doctorName;
//    int doctorID;
//    Patient* patients[10];
//    int patientCount;
//
//public:
//    Doctor(string name, int id);
//    void addPatient(Patient* patient);
//    void printDoctorDetails() const;
//};
//
//// Patient constructor
//Patient::Patient(string name, int age) : patientName(name), patientAge(age) {}
//
//void Patient::setPatientDetails(string name, int age) {
//    patientName = name;
//    patientAge = age;
//}
//
//void Patient::printPatientDetails() const {
//    cout << "Patient Name is: " << patientName << ", Age is: " << patientAge << endl;
//}
//
//// Doctor constructor
//Doctor::Doctor(string name, int id) : doctorName(name), doctorID(id), patientCount(0) {}
//
//void Doctor::addPatient(Patient* patient) {
//    if (patientCount < 10) {
//        patients[patientCount++] = patient;
//    }
//    else {
//        cout << "Cannot add more patients. Maximum limit reached." << endl;
//    }
//}
//
//// Function to print the doctor
//void Doctor::printDoctorDetails() const {
//    cout << "Doctor: " << doctorName << ", ID: " << doctorID << endl;
//    cout << "Patients treated by this doctor:" << endl;
//    for (int i = 0; i < patientCount; i++) {
//        patients[i]->printPatientDetails();
//    }
//}
//
//// Main function
//int main() {
//    Patient patient1("Cheema", 56);
//    Patient patient2("Khan", 78);
//    Patient patient3("Aalyan", 3344);
//    Doctor doctor1("Dr. Faisal", 61);
//    Doctor doctor2("Dr. Jani", 10);
//
//    doctor1.addPatient(&patient1);
//    doctor1.addPatient(&patient2);
//    doctor2.addPatient(&patient3);
//
//    cout << "Doctor 1 details:" << endl;
//    doctor1.printDoctorDetails();
//    cout << endl;
//
//    cout << "Doctor 2 details:" << endl;
//    doctor2.printDoctorDetails();
//    cout << endl;
//
//    system("pause"); // Pause the system (Windows specific)
//    return 0;
//}