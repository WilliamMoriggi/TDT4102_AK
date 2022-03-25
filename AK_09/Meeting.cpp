#include "Meeting.h"

Meeting::Meeting(int d, 
                int st, 
                int et, 
                Campus l,
                std::string s, 
                std::shared_ptr<Person> le) :
                day{d}, 
                startTime{st}, 
                endTime{et},
                location{l},
                subject{s}, 
                leader{le}{addParticipant(leader);}

void Meeting::addParticipant(std::shared_ptr<Person> participant){
    participants.push_back(participant);
}

std::vector<std::string> Meeting::getParticipantList() const{
    std::vector<std::string> a;
    for (std::shared_ptr<Person> participant : participants)
        a.push_back(participant.get()->getName());
    return a;
}



std::ostream& operator<<(std::ostream& os, const Meeting& meeting){
    os << "Subject: " << meeting.getSubject() << std::endl;
    os << "Location: ";
    switch(meeting.getLocation()){
        case Campus::TRONDHEIM:
        os << "Trondheim" << std::endl;
        break;
        case Campus::GJOVIK:
        os << "Gjøvik" << std::endl;
        break;
        case Campus::AALESUND:
        os << "Ålesund" << std::endl;
        break;
    }
    os << "Start time: " << meeting.getStartTime() << std::endl;
    os << "End time: " << meeting.getEndTime() << std::endl;
    os << "Meeting Leader: " << meeting.getLeader() << std::endl;
    os << "Participants: " << std::endl;
    std::vector<std::string> p = meeting.getParticipantList();

    for (int i = 1; i < p.size(); ++i) {
        os << p.at(i) << std::endl;
    }
    return os;
}

std::vector<std::shared_ptr<Person>> Meeting::findPotentialCoDriving(Meeting nM) const{
    std::vector<std::shared_ptr<Person>> a;
    std::vector<std::string> p = nM.getParticipantList();
for (std::shared_ptr<Person> participant : participants){
    for(int i = 0; i < p.size();i++){
        if (participant.get()->getName() == p.at(i)){
            a.push_back(participant);
        }
    }
}
return a;
}