# include "std_lib_facilities.h"
# include "cannonball.h"
# include "utilities.h"


void testDeviation(double compareOperand, double toOperand, double maxError, string name);
bool checkIfDistanceToTargetIsCorrect();
void THEGAME_BBY();

int main()
{
    // testing av funksjonene
    testDeviation(velY(0.0,2.5), 0.475, 0.001, "velY(0.0,2.5)");
    testDeviation(velY(0.0,5.0), -24.05, 0.001, "velY(0.0,5.0)");

	testDeviation(posX(0.0,50.0,2.5), 125.0, 0.0001, "posX(0.0,50.0,2.5)");
    testDeviation(posX(0.0,50.0,5.0), 250.0, 0.0001, "posX(0.0,50.0,5.0)");

    testDeviation(posY(0.0,25,2.5),31.84,0.0001, "posY(0.0,25,2.5)");
    testDeviation(posY(0.0,25,5.0),2.375,0.0001, "posY(0.0,25,5.0)");

    

    cout << checkIfDistanceToTargetIsCorrect() << '\n';

    // test av randomwithlimits funksjonen
    srand(unsigned(time(nullptr)));

    for (int i = 0; i < 10; i++){
        cout << randomWithLimits(0, 10) << " ";
    }
    cout <<'\n';



    THEGAME_BBY();
}

void testDeviation(double compareOperand, double toOperand, double maxError, string name){
    if (toOperand - compareOperand < maxError){
        cout << name << "Sucsess" << '\n';
    }
    else {
        cout << name << "NO, bad try again" << '\n';
    }
}

bool checkIfDistanceToTargetIsCorrect() {
    double error = targetPractice(0,0,0);
    if(error == 0) return true;
    else return false;
}





void THEGAME_BBY(){
    int targetPlacement = randomWithLimits(100,1000);
    cout << targetPlacement;
    for(int i = 1; i <= 10; i++){
        double theta = getUserInputTheta();
        double vel = getUserInputAbsVelocity();
        double distFromTarget = targetPractice(targetPlacement,  
                                               getVelocityX(theta,vel),
                                               getVelocityY(theta,vel));
        
        if (distFromTarget < 5.0 || distFromTarget > -5.0){
            printTime(flightTime(getVelocityY(theta,vel)));
            cout << getDistanceTraveled(getVelocityX(theta,vel),getVelocityY(theta,vel));
            cout << "you win" << '\n';
            break;
        }
        
        else{
            printTime(flightTime(getVelocityY(theta,vel)));
            cout << getDistanceTraveled(getVelocityX(theta,vel),getVelocityY(theta,vel));
            cout << "try again :( " << '\n';
        }
        
    }
}
