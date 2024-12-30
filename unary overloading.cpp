//#include <iostream>
//using namespace std;
//
//class Number {
//private:
//    int value;
//
//public:
//    // Constructor
//    Number(int v) : value(v) {}
//
//    // Overloading unary `++` operator as a member function
//    Number operator++() {
//        ++value; // Pre-increment
//        return *this;
//    }
//
//    //// Overloading unary `++` operator (post-increment)
//    //Number operator++(int) {
//    //    Number temp = *this; // Copy current state
//    //    value++;             // Post-increment
//    //    return temp;
//    //}
//
//    // Display function
//    void display() const {
//        cout << "Value: " << value << endl;
//    }
//};
//
//int main() {
//    Number num(5);
//    num.display();   // Output: Value: 5
//
//    ++num;           // Pre-increment
//    num.display();   // Output: Value: 6
//
//    //num++;           // Post-increment
//    //num.display();   // Output: Value: 7
//
//    system("pause");
//    return 0;
//}
