#include "cannonball.h"
#include "std_lib_facilities.h"
//#include "cmath.h"


double acclY(){
    return -9.81;
}

double velY(double initVelocityY, double time){
    return initVelocityY + acclY()*time;
}

double posX(double initPosition, double initVelocity, double time){
    return initPosition + initVelocity*time;
}

double posY(double initPosition, double initVelocity, double time){
    return initPosition + initVelocity*time + ((acclY()*time*time)/2);
}

void printTime(double seconds_1){
    int seconds = (int)seconds_1;
    int hours = 0;
    int minutes = 0;
    int sec = 0;

    hours = seconds/3600;
    minutes = (seconds%3600)/60;
    sec = seconds%3600%60;

    cout << seconds << " sekunder = " 
         <<hours   <<" timer, "
         <<minutes <<" minutter og "
         <<sec <<" sekunder"
         << '\n';
}

double flightTime(double initVelocityY){
    return (-2*initVelocityY)/initVelocityY;
}


double getUserInputTheta(){
    double t = 0;
    cout << "input angle: ";
    cin >> t;
    return t;
}

double getUserInputAbsVelocity(){
    double v = 0;
    cout << "input absVelocity: ";
    cin >> v;
    return v;
}

double degToRad(double deg){
    return deg * 3.14159265/180;
}

double getVelocityX(double theta, double absVelocity){
    return absVelocity*cos(theta);
}
double getVelocityY(double theta, double absVelocity){
    return absVelocity*sin(theta);
}

vector<double> getVelocityVector(double theta, double absVelocity){
    vector<double>  velocityvect{getVelocityX(theta,absVelocity), getVelocityY(theta,absVelocity)};
    return velocityvect;
}

double getDistanceTraveled(double velocityX, double velocityY){
    double time = 0;
    while (posY(0, velocityY, time) >= 0) time+= 0.0001;
    return posX(0,velocityX, time);
}

double targetPractice(double distanceToTarget,double velocityX,double velocityY){
    return distanceToTarget - getDistanceTraveled(velocityX, velocityY);
}