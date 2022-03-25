#pragma once
#include "Car.h"

#include <string>
#include <memory>
#include <ostream>

class Person{
    private:
    std::string name;
    std::string email;

    std::unique_ptr<Car> car;

    public:
    Person(std::string N, 
           std::string E,
           std::unique_ptr<Car> = nullptr);

    std::string getName() const {return name;}
    std::string getEmail()const {return email;}

    void setEmail(const std::string E) {email = E;}

    bool hasAvailableSeats() const;
};

std::ostream& operator<<(std::ostream& os, const Person &person);