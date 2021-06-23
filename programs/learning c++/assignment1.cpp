#include <iostream>
//INHERITANCE {atharv kulkarni}
using namespace std;

class Car {
    public:
        void FiftyKmph(){
            cout << "The car is running at 50 kilometer per hour" << endl;
        }
        void EightyKmph(){
            cout << "The car is running at 80 kilometer per hour" << endl;
        }
        void Stop(){
            cout << "The car stops" << endl;
        }
};

class SportsCar : public Car{
    
    public:
        void HundredKmph(){
        cout << "The sports car is running at 100 kilometer per hour" << endl;
    }
    void OneFiftyKmph(){
            cout << "The sports car is running at 150 kilometer per hour" << endl;
        }
};

int main(){

    Car car1;
    car1.FiftyKmph();

    SportsCar car2;
    car2.OneFiftyKmph();

    return 0;

}