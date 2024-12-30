//#include <iostream>
//#include <string>
//using namespace std;
//
//// Address class
//class Address {
//public:
//    // Constructor to initialize address with street, city, and zip code
//    Address(const string& stre, const string& city, int postalcode);
//    // Destructor
//    ~Address();
//    // Function to display address details
//    void displayAddress() const;
//
//private:
//    string street;
//    string city;
//    int zipCode;
//};
//
//// Person class
//class Person {
//public:
//    // Constructor to initialize person with name, age, and address
//    Person(const string& name, int age, Address* address);
//    // Destructor
//    ~Person();
//    // Function to display person details
//    void displayPerson() const;
//
//private:
//    string name;
//    int age;
//    Address* address; // Aggregation relationship: Address is not owned by Person
//};
//
//// Address constructor
//Address::Address(const string& stre, const string& city, int postalcode)
//    : street(stre), city(city), zipCode(postalcode) {}
//
//// Address destructor
//Address::~Address() {
//    cout << "Address at " << street << ", " << city << " with zip " << zipCode << " is destroyed." << endl;
//}
//
//// Function to display address
//void Address::displayAddress() const {
//    cout << "Street: " << street << ", City: " << city << ", Zip: " << zipCode << endl;
//}
//
//// Person constructor
//Person::Person(const string& name, int age, Address* address)
//    : name(name), age(age), address(address) {}
//
//// Person destructor
//Person::~Person() {
//    cout << "Person who is " << name << " is destroyed." << endl;
//}
//
//// Function to display person details, including address details
//void Person::displayPerson() const {
//    cout << "Name: " << name << endl;
//    cout << "Age: " << age << endl;
//    cout << "Address: " << endl;
//    address->displayAddress();
//}
//
//// Main function
//int main() {
//    // Create a shared address instance
//    Address* shareAddress = new Address("sargodha chak 104 NB", "Main town", 996);
//
//    // Create three persons sharing the same address
//    Person person1("Shafiq", 124, shareAddress);
//    Person person2("Mani", 56, shareAddress);
//    Person person3("Fani", 789, shareAddress);
//
//    // Display each person's information
//    person1.displayPerson();
//    person2.displayPerson();
//    person3.displayPerson();
//
//    // Clean up memory
//    delete shareAddress;
//
//    system("pause"); // Pause the system (Windows specific)
//    return 0;
//}