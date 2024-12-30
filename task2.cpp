//#include <iostream>
//using namespace std;
//
//enum SensorType {
//    Temperature,
//    Pressure,
//    Humidity
//};
//
//union SensorData {
//    float temperature;
//    long pressure;
//    double humidity;
//};
//
//struct Sensor {
//    int sensorID;
//    SensorType type;
//    SensorData data;
//};
//
//void displaySensorData(const Sensor& sensor) {
//    cout << "Sensor ID: " << sensor.sensorID << endl;
//
//    switch (sensor.type) {
//    case Temperature:
//        cout << "Temperature: " << sensor.data.temperature << "°C" << endl;
//        break;
//    case Pressure:
//        cout << "Pressure: " << sensor.data.pressure << " Pascals" << endl;
//        break;
//    case Humidity:
//        cout << "Humidity: " << sensor.data.humidity << "%" << endl;
//        break;
//    default:
//        cout << "Invalid sensor type." << endl;
//        break;
//    }
//}
//
//int main() {
//    Sensor sensor1 = { 1, Temperature, { 23.5f } };
//    Sensor sensor2 = { 2, Pressure, { 101325 } };
//    Sensor sensor3 = { 3, Humidity, { 45.0 } };
//
//    cout << "Sensor 1 Data:" << endl;
//    displaySensorData(sensor1);
//    cout << endl;
//
//    cout << "Sensor 2 Data:" << endl;
//    displaySensorData(sensor2);
//    cout << endl;
//
//    cout << "Sensor 3 Data:" << endl;
//    displaySensorData(sensor3);
//    cout << endl;
//
//    system("pause");
//    return 0;
//}
