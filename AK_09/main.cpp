#include "std_lib_facilities.h"
#include "Car.h"
#include "Meeting.h"
#include "Person.h"

int main()
{

    Person p1{"Herman", "H@gmail.com"};
    std::cout << p1 << std::endl;
    Person p2{"Sindre", "B@hotmail.com", std::make_unique<Car>(Car(1))};
    std::cout << p2 << std::endl;
    Person p3{"Håkon", "S@Gmail.com", std::make_unique<Car>(Car{3})};
    std::cout << p3 << std::endl;
	


    std::shared_ptr<Person> p1_ptr = std::make_unique<Person>(Person{"Herman", "H@gmail.com"});
    std::shared_ptr<Person> p2_ptr = std::make_unique<Person>(Person{"sider", "B@hotmail.com", std::make_unique<Car>(Car(1))});
    std::shared_ptr<Person> p3_ptr = std::make_unique<Person>(Person{"Håkon", "S@Gmail.com", std::make_unique<Car>(Car{3})});
    
    Meeting meet1{2, 815, 1000, Campus::TRONDHEIM, "Intro Topologi", p1_ptr};
    
    meet1.addParticipant(p3_ptr);
    std::cout << "\nMeeting 1:\n\n" << meet1 << std::endl;
    
    Meeting meet2{2, 900, 1030, Campus::TRONDHEIM, "C++ studasstime", p3_ptr};

    meet2.addParticipant(p1_ptr);
    meet2.addParticipant(p2_ptr);
    std::cout << "\nMeeting 2: \n\n" << meet2 << std::endl;

    std::cout << "Potential codrivers:" << std::endl;
    for (std::shared_ptr<Person> coDriver : meet1.findPotentialCoDriving(meet2)) {
        std::cout << *coDriver << std::endl;
    }
       
}