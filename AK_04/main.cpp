#include "std_lib_facilities.h"
#include "tests.h"
#include "utilities.h"

void playMastermind();

int main()
{
	//Oppgave 1a)
    // programmet vil skrive ut 5 for verdien v0
    
    //Oppgave 1b&c)
    testCallByValue();

    //Oppgave 1d)
    testCallByReference();

    //Oppgave 1e)
    // Det er veldig nyttig med refferanse dersom da skjer all logikken
    // inni swapNumbers funksjeonen.
    testSwapNumbers();

    // Oppgabe 2a-d)
    Student Bill{"Bill", "EEE", 20};
    printStudent(Bill);
    cout << isInProgram(Bill,"EEE") << '\n';

    // Oppgave 2e)
    // dette er fordi dersom man har inkludert en fil to ganger vil compileren
    // prosessere filen sitt innhold to ganger og dermed til mad definere Student
    // to ganger noe som sammsvarer med error meldingen

    // Oppgave 3)
    srand(unsigned(time(nullptr)));
    testString();


    playMastermind();
}

void playMastermind(){
    constexpr int size = 4;
    constexpr int letters = 6;
    const int numberOfTries = 5;
    string code = randomizeString(65,70,letters);
    cout << code << endl;
    string guess = "";
    for(int i = 0; i <= numberOfTries; i++){
        guess = readInputToString(65,70,letters); 
        cout<<"you guessed: " << guess << endl
            <<"you have guessed " << checkCharacters(code, guess) << " correct letters" << endl
            <<"you have guessed " << checkCharactersAndPosition(code, guess) << " letter in the correct spott" << endl
            << endl;

        if (checkCharactersAndPosition(code, guess) == size){
            cout << "Congratulations you are a Mastermind" << endl;
            break;
        }
        if (i == numberOfTries){
            cout << "You have not succeded in guessing the code" << endl;
        }
    }

}