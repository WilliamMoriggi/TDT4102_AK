#include "std_lib_facilities.h"
#include "AnimationWindow.h"
#include "Emoji.h"


// Definer størrelse på vindu og emoji
constexpr int xmax = 1000;
constexpr int ymax = 600;
constexpr int emojiRadius = 50;

int main()
{
    // Oppgave 1a)
    // Privat betyr at kunn klassen selv, friends og klasser som arver klassen kan "se" det som er private.
    // Public alle kan "se" det som er public
    // Protected mebers kan bli "sett" av klssen slev, friends av klassen som har declarert medlemene
    // og pricately derived klasser



	const Point tl{100, 100};
	const string win_label{"Emoji factory"};
	AnimationWindow win{tl.x, tl.y, xmax, ymax, win_label};

	
	win.wait_for_close();
}
