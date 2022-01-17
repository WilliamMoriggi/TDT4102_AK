#include "std_lib_facilities.h"
#include "cmath"
#include "Graph.h"
#include "AnimationWindow.h"

void inputAndPrintInteger();
int inputInteger();
void inputIntegersAndPrintSum();
bool isOdd(int n);
void printHumanReadableTiem(int s);
void numberSum();
void sumOfNNumbers();
double inputDouble();
double nokToEuro();
void printMultiplicationTable();
double discriminant(double a, double b, double c);
void printRealRoots(double a, double b, double c);
void solveQuadraticEquation();
void pythagorasTherumDrawer();



int main()
{
    /*
    // Oppgave 1a)
    cout << "Oppgave 1a) \n";
	inputAndPrintInteger();

    // Oppgave 1b)
    cout << "Oppgave 1b) \n";
    int number = inputInteger();
    cout << "Du skrev: " << number << '\n';

    // Oppgave 1c)
    cout << "Oppgave 1c) \n";
    inputIntegersAndPrintSum();

        
    Oppgave 1d)

    Jeg valgte å bruke inputInteger() siden denne funksjonen returnerer en en intiger,
    inputAndPrintInteger() returnerer ingenting og vil bare printe det som blir tastet inn av brukeren.
        

   //Oppgve 1e)
   cout << "Oppgave 1e) \n";
   for (int i = 0; i < 16; i++){
       cout <<"Tallet: " 
            << i 
            << " er ett oddetall = " 
            << (isOdd(i) ? "true" : "false") 
            << '\n';
   }

   //Oppgave 1f)
   cout << "Oppgave 1f) \n";
   printHumanReadableTiem(86300);
   
   //Oppgave 2a)
   cout << "Oppgave 2a) \n";
   numberSum();

   //Oppgave 2b)
   cout << "Oppgave 2b) \n";
   sumOfNNumbers();

    
   Oppgave 2c)

   Der hvor du vet antall ganger du vil kjøre koden er det logisk å bruke en for loop,
   mens der hvor du ikke vet på forhånd hvor mange ganger koden skal kjøre gir en while loop mer mening
    

  // Oppgave 2d)
  cout << "Oppgave 2d) \n";
  cout << inputDouble() << '\n';

  // Oppgave 2e)
  cout << "Oppgave 2e) \n";
  cout << nokToEuro();

    
  Oppgave 2f)

  Jeg brukte inputDouble framfor inputIntiger for å ikke måtte caste til en annen datatype inne i nokToEuro funksjonen,
  da blir svaret implisitt en double som er nice hvis man vil ha med cent i tilleg til euro.
  */

 // Oppgave 3)
 

 int running = 1;
    while (running){
         cout << '\n' << '\n'
              << "Velg funksjon: \n"
              << "0) Avslutt \n"
              << "1) Summer to tall \n"
              << "2) Summer flere tall \n"
              << "3) Konverter NOK til EURO \n"
              << "4) Lag en gangetabell \n"
              << "5) solve Quadratic Equation \n"
              << "6) Vis pytagoras visuelt \n"
              << "Angi valg (0-6) ";

        int choice = inputInteger();
        switch (choice){
            case 0:
            running = 0;
            break;

            case 1:
            inputIntegersAndPrintSum();
            break;

            case 2:
            sumOfNNumbers();
            break;

            case 3:
            nokToEuro();
            break;

            case 4:
            printMultiplicationTable();
            break;

            case 5:
            solveQuadraticEquation();
            break;
            
            case 6:
            pythagorasTherumDrawer();
            break;
        }
    }
}

void inputAndPrintInteger(){
    int numb = 0;
    cout << "Skriv inn et tall: ";
    cin >> numb;
    cout << "Du skrev: " << numb << '\n';
}

int inputInteger(){
    int a = 0;
    cout << "Skriv inn et tall: ";
    cin >> a;
    return a;
}

void inputIntegersAndPrintSum(){
    int a = inputInteger();
    int b = inputInteger();
    cout << "Summen av tallene: " << a+b << '\n';
}

bool isOdd(int n){
    if (n%2 == 0){
        return false;
    }
    else{
        return true;
    }
}

void printHumanReadableTiem(int s){
    int days = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    days = s/86400;
    hours = (s%86400)/3600;
    minutes = (s%86400%3600)/60;
    seconds = s%86400%3600%60;

    cout << s << " sekunder = "
         <<days    <<" dager, " 
         <<hours   <<" timer, "
         <<minutes <<" minutter og "
         <<seconds <<" sekunder"
         << '\n';
}

void numberSum(){
    int number_amout = 0;
    int sum = 0;
    cout << "Hvor mange tall vil du summere? - ";
    cin >> number_amout;

    for (int i = 1; i<= number_amout; i++){
        int a = 0;
        cout << "skriv tall nr." << i << "-";
        cin >> a;
        sum += a;
    }
    cout << "Summen av tallene er: " << sum << '\n';
}

void sumOfNNumbers(){
    int sum = 0;
    int number = 0;
    do{
        cout << "skriv ett tall ";
        cin >> number;
        sum += number;
    }
    while(number != 0);
    cout << "Summen av tallene er: " << sum << '\n';
}

double inputDouble(){
    double number = 0;
    cout << "input a number ";
    cin >> number;
    return number;
}

double nokToEuro(){
    double nok = inputDouble();
    while(nok < 0){
        nok = inputDouble();
    }
    return nok * 9.75;
}


void printMultiplicationTable(){
    int x = inputInteger();
    int y = inputInteger();
    for (int i = 1; i <= y; i++){
        for(int j = 1; j <= x; j++){
            cout << i*j << setw(5);
        }
        cout << '\n';
    }
}

double discriminant(double a, double b, double c){
    return pow(b,2) - 4*a*c;
}

void printRealRoots(double a, double b, double c){
    double disc = discriminant(a,b,c);
    if (disc>0){
        int x1 = (-b + sqrt(disc)) / (2*a);
        int x2 = (-b - sqrt(disc)) / (2*a);
        cout << "Ligningen har to løsninger: "
             << x1 << " og " << x2 << '\n';
    }
    else if (disc == 0){
        int x = ((-1)*b)/2*a;
        cout << "Ligningen har en løsning: "
             << x << '\n';
    }
    else{
        cout << "Ligningen har ingen reel losning \n";
    }
}

void solveQuadraticEquation(){
    cout << "legg inn verdiene for a, b og c - \n";
    double a,b,c = 0;
    cin >> a;
    cin >> b;
    cin >> c;

    printRealRoots(a,b,c);
}

void pythagorasTherumDrawer(){
    using namespace TDT4102;
    int height = 900;
    int width = 900;
    AnimationWindow win{100, 100, width, height, "Pythagoras"};

    Point point1 {300,300};
    Point point2 {300,600};
    Point point3 {600,600};

    win.draw_triangle(point1, point2, point3, Color::red);
    win.draw_quad(Point{0, 300}, Point{300, 300}, Point{300, 600}, Point{0, 600}, Color::blue);
    win.draw_quad(Point{300, 600}, Point{600, 600}, Point{600, 900}, Point{300, 900}, Color::blue);
    win.draw_quad(Point{300, 600}, Point{600, 600}, Point{600, 900}, Point{300, 900}, Color::blue);
    win.draw_quad(Point{300, 300}, Point{600, 600}, Point{600+300, 600-300}, Point{300+300, 300-300}, Color::blue);
    win.wait_for_close();
}