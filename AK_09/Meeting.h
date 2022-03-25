#pragma once

#include "Person.h"

#include <string>
#include <memory>
#include <vector>
#include <ostream>

enum class Campus {
    TRONDHEIM,
    AALESUND,
    GJOVIK,
};

class Meeting{
    private:
    int day;
    int startTime; 
    int endTime;
    Campus location;
    std::string subject;
    const std::shared_ptr<Person> leader;
    std::vector<std::shared_ptr<Person>> participants; 

    public:

    Meeting(int d, int st, int et, Campus l,std::string s, std::shared_ptr<Person> le);

    int getDay() const {return day;}
    int getStartTime() const {return startTime;}
    int getEndTime() const {return endTime;}
    Campus getLocation() const {return location;}
    std::string getSubject()const {return subject;}
    std::shared_ptr<Person> getLeader() const {return leader;}

    void addParticipant(std::shared_ptr<Person> participant);

    std::vector<std::string> getParticipantList() const;
    std::vector<std::shared_ptr<Person>> findPotentialCoDriving(Meeting nM) const;
};

std::ostream& operator<<(std::ostream& os, const Meeting& meeting);