#include "Person.h"

Person::Person(std::string N, std::string E,std::unique_ptr<Car> C): name{N}, email{E}, car{std::move(C)}{}

bool Person::hasAvailableSeats() const{
    if(car.get() != nullptr) {
        if (car.get()->hasFreeSeats()) return true;
    }
    else return false;
}


std::ostream& operator<<(std::ostream& os, const Person &person){
    os << "Name: " << person.getName() << std::endl;
    os << "Free seats: " << person.hasAvailableSeats() << std::endl;
    os << "Email: " << person.getEmail() << std::endl;
    return os; 
}