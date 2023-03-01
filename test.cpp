#include <iostream>
#include <string>

using namespace std;

class Cars {
 public:
  virtual ~Cars(){};
  virtual string type_of_car() = 0;
};

class SportCars() : public Cars {
 public:
  string type_of_car() override {
    return "Sport"; 
};

class Taxi() : public Cars {
 public:
  string type_of_car() override {
    return "Taxi";
  }
};

class TransportFactory() {
  virtual Cars* make_Cars() = 0;
  ~AbstractFactory();
};

class CarFactory : public TransportFatcory() {
  
};



int main() {
    
}
