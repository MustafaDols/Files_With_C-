#include <iostream>
using namespace std;

class InformaionInterface {
public:
    //Abstract method
    virtual void display()=0;
};

class Car : public InformaionInterface{
private:
    string brand;
    string model;
    int year;
protected:
    bool isExpired() {
        int currentYear = 2025;
        return (currentYear - year) > 15;
    }

public:
    Car() {

    }

    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;

    }

    string getBrand() {
        return brand;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    void setBrand(string brand) {
        this->brand = brand;
    }

    void setModel(string model) {
        this->model = model;
    }

    void setYear(int year) {
        this->year = year;
    }

    virtual  void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Expired ?: " << (isExpired() ? "Yes" : "No") << endl;
    }


};
class ElctricCar : public Car , public InformaionInterface{
private:
    int betteryCapacity;
    public:

    void setBetteryCapacity(int betteryCapacity) {
        this->betteryCapacity = betteryCapacity;
    }
    int getBetteryCapacity() {
        return betteryCapacity;
    }
public:
    ElctricCar() {

    }
    ElctricCar(string brand, string model, int year, int bettery) {
        Car::setBrand(brand);
        Car::setModel(model);
        Car::setYear(year);
       betteryCapacity = bettery;
    }
    void display() override {
        Car::display();
        cout << "BetteryCapacity: " << betteryCapacity << endl;
    }

};


int main() {
    Car car1;
    car1.setBrand("BMW");
    car1.setModel("X6");
    car1.setYear(2025);

    Car car2;
    car2.setBrand("Fiat");
    car2.setModel("128");
    car2.setYear(2002);

    ElctricCar car3;
    car3.setBrand("Tesla");
    car3.setModel("G1");
    car3.setYear(2021);
    car3.setBetteryCapacity(100);

    car1.display();
    cout << endl;
    car2.display();
    cout << endl;
    car3.display();

    return 0;
}
